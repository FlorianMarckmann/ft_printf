/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:45:59 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/27 12:50:23 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

void	find_conversion(t_type *str, char *format)
{
	if (format[0] == 'd' || format[0] == 'i')
		conv_for_d(str);
	else if (format[0] == 's')
		conv_for_s(str);
	else if (format[0] == 'x')
		conv_for_x(str);
	else if (format[0] == 'X')
		conv_for_xx(str);
	else if (format[0] == 'c')
		conv_for_c(str);
	else if (format[0] == '%')
		conv_for_pourcentage(str);
	else if (format[0] == 'p')
		conv_for_p(str);
	else if (format[0] == 'u')
		conv_for_u(str);
}

char	*parse_flag_p(t_type *str, char *sentence)
{
	if (str->second < 0)
		str->second = (int)ft_strlen(sentence);
	if (str->fdot && !str->second)
		sentence[0] = '\0';
	if (str->fdot && !str->second)
	{
		str->fdot = 0;
		str->fzero = 0;
	}
	return (sentence);
}
