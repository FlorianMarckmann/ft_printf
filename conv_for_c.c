/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_for_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:30:39 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/25 15:23:40 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static void	print_for_c(t_type *str)
{
	int tmp;

	if (str->first)
	{
		tmp = str->first - 1;
		if (str->fless)
		{
			ft_putchar_fd(str->car, 1, str);
			if (tmp > 0)
				while (tmp--)
					ft_putchar_fd(' ', 1, str);
		}
		if (!str->fless)
		{
			if (tmp > 0)
				while (tmp--)
					ft_putchar_fd(' ', 1, str);
			ft_putchar_fd(str->car, 1, str);
		}
	}
	else if (!str->first)
		ft_putchar_fd(str->car, 1, str);
}

static void	parse_flag(t_type *str)
{
	if (str->first <= 0)
	{
		str->first = -str->first;
		str->fless = 1;
	}
}

void		conv_for_c(t_type *str)
{
	str->car = va_arg(str->ap, int);
	parse_flag(str);
	print_for_c(str);
}
