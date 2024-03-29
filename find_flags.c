/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:10:41 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/22 11:06:48 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	find_flags(char *format, t_type *str)
{
	int i;

	i = 0;
	while (format[i] == '-' || format[i] == '0')
	{
		if (format[i] == '-')
			str->fless = 1;
		if (format[i] == '0')
			str->fzero = 1;
		i++;
	}
	if (ft_isdigit(format[i]))
	{
		str->first = ft_atoi(&format[i]);
		while (ft_isdigit(format[i]))
			i++;
	}
	return (find_flags_follow(format, i, str));
}

int	find_flags_follow(char *format, int i, t_type *str)
{
	if (format[i] == '*')
	{
		str->first = va_arg(str->ap, int);
		i++;
	}
	if (format[i] == '.')
	{
		str->fdot = 1;
		i++;
	}
	if (ft_isdigit(format[i]))
	{
		str->second = ft_atoi(&format[i]);
		while (ft_isdigit(format[i]))
			i++;
	}
	else if (format[i] == '*')
	{
		str->second = va_arg(str->ap, int);
		str->fstar = str->second;
		i++;
	}
	return (i);
}
