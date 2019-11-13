/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_for_pourcentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:50:58 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/13 13:28:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

void    print_for_pourcentage(t_type *str)
{
	int tmp;

	tmp = 0;
	if (str->first)
	{	
		tmp = str->first - 1;
		if (str->fless)
		{
			ft_putchar_fd('%', 1, str);
			if (tmp > 0)
				while (tmp--)
					ft_putchar_fd(' ', 1, str);
		}
		if (!str->fless)
		{
			if (tmp > 0)
				while (tmp--)
					ft_putchar_fd(' ', 1, str);
			ft_putchar_fd('%', 1, str);
		}
	}
	else
		ft_putchar_fd('%', 1, str);
}
void    conv_for_pourcentage(t_type *str)
{
	print_for_pourcentage(str);
}