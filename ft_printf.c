/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:05:25 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/08 13:40:31 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_printf(char *format, ...)
{
	t_type	str;
	int		i;

	i = -1;
	va_start(str.ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			initialize_all(&str);
			i += find_flags(&format[i], &str);
			find_conversion(&str, &format[i]);
			i++;
		}
		ft_putchar_fd(format[i], 1);
	}
}
