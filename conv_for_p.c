/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_for_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:53:37 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/27 12:50:55 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

void	print_for_p(t_type *str, char *sentence)
{
	int tmp;
	int tmp2;

	tmp = 0;
	tmp2 = 0;
	if (str->first && !str->second && !str->fzero)
	{
		tmp = (size_t)str->first - (ft_strlen(sentence) + 2);
		if (str->fless)
		{
			ft_putstr_fd("0x", 1, str);
			ft_putstr_fd(sentence, 1, str);
			print(' ', tmp, str);
		}
		else if (!str->fless)
		{
			print(' ', tmp, str);
			ft_putstr_fd("0x", 1, str);
			ft_putstr_fd(sentence, 1, str);
		}
	}
	print_for_p2(str, tmp, tmp2, sentence);
}

void	print_for_p2(t_type *str, int tmp, int tmp2, char *sentence)
{
	(void)tmp2;
	if (!str->first && (str->fdot || str->fzero) && str->second)
	{
		tmp = (size_t)str->second - ft_strlen(sentence);
		if (tmp > 0 && !str->fless)
		{
			ft_putstr_fd("0x", 1, str);
			while (tmp--)
				ft_putchar_fd('0', 1, str);
			tmp = -1;
		}
		else if (tmp != -1)
			ft_putstr_fd("0x", 1, str);
		ft_putstr_fd(sentence, 1, str);
	}
	print_for_p3(str, tmp, tmp2, sentence);
}

void	print_for_p3(t_type *str, int tmp, int tmp2, char *sentence)
{
	(void)tmp2;
	if (str->first && str->fzero && !str->second)
	{
		tmp = (size_t)str->first - ft_strlen(sentence) - 2;
		if (tmp > 0 && !str->fless)
		{
			ft_putstr_fd("0x", 1, str);
			while (tmp--)
				ft_putchar_fd('0', 1, str);
			tmp = -1;
		}
		else if (tmp != -1)
			ft_putstr_fd("0x", 1, str);
		ft_putstr_fd(sentence, 1, str);
	}
	print_for_p4(str, tmp, tmp2, sentence);
}

void	print_for_p4(t_type *str, int tmp, int tmp2, char *sentence)
{
	if (str->first && str->second && str->fdot)
		print_for_p5(str, tmp, tmp2, sentence);
	if (!str->first && !str->second && !str->fdot)
	{
		ft_putstr_fd("0x", 1, str);
		ft_putstr_fd(sentence, 1, str);
	}
}

void	conv_for_p(t_type *str)
{
	char *sentence;

	str->p = va_arg(str->ap, void *);
	if (!(sentence = ft_uitoa_base((uintmax_t)str->p, 16, "0123456789abcdef")))
	{
		str->err = 1;
		return ;
	}
	sentence = parse_flag_p(str, sentence);
	print_for_p(str, sentence);
	free(sentence);
}
