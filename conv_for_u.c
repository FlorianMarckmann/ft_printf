/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_for_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:07:57 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/19 21:20:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static void	print(char c, int tmp, t_type *str)
{
	if (tmp > 0)
		while (tmp--)
			ft_putchar_fd(c, 1, str);
}

static void	second(t_type *str)
{
	int tmp;

	if (str->fzero && str->fdot)
		tmp = str->second - ft_strlen(str->sentence);
	else
		tmp = str->second - ft_strlen(str->sentence);
	if (str->u_d < 0)
	{
		print('0', tmp, str);
		ft_putstr_fd(str->sentence, 1, str);
	}
	else
	{
		print('0', tmp, str);
		ft_putstr_fd(str->sentence, 1, str);	
	}
}

static void	first(t_type *str)
{
	int tmp;

	tmp = str->first - ft_strlen(str->sentence);
	if (str->fless)
	{
		ft_putstr_fd(str->sentence, 1, str);
		!str->fzero ? print(' ', tmp, str) : print('0', tmp, str);
	}
	else
	{
		!str->fzero ? print(' ', tmp, str) : print('0', tmp, str);
		ft_putstr_fd(str->sentence, 1, str);	
	}
}

static void	print_for_u(t_type *str)
{
	int tmp;

	if (!str->first && str->fdot && str->second)
		second(str);
	else if (str->first && !str->second && !str->fdot)
		first(str);
	else if (str->first && str->fdot && (str->second || str->remember))
	{
		if (str->u_d >= 0 && str->second)
			tmp = str->first - str->second;
		else
			tmp = str->first - ft_strlen(str->sentence);
		if (str->fless)
		{
			second(str);
			!str->fzero ? print(' ', tmp, str) : print('0', tmp, str);
		}
		else
		{
			!str->fzero ? print(' ', tmp, str) : print('0', tmp, str);
			second(str);
		}
	}
	else if (!str->first && !str->second && !str->fdot)
		ft_putstr_fd(str->sentence, 1, str);
}

static void	parse_flag(t_type *str)
{
	if (str->fzero && str->fdot && str->fstar >= 0)
		str->fzero = 0;
	if (str->fless && !str->first)
		str->fless = 0;
	if (!str->second && !str->u_d && str->fdot)
		str->sentence = ft_strdup(" ");
	if (!str->second && !str->u_d && !str->fdot)
		str->sentence = ft_strdup("0");
	if (str->fzero && str->first && !str->second && !str->fdot)
	{
		str->second = str->first;
		str->first = 0;
		str->fdot = 1;
	}
	if (str->second && str->second < ft_strlen(str->sentence))
		str->second = ft_strlen(str->sentence);
	if (str->second <= 0)
	{
		str->remember = 1;
		str->second = 0;
	}
	if (str->first < 0)
	{
		str->first = -str->first;
		str->fless = 1;
	}
	if (!str->first && !str->second && str->fdot && str->u_d)
		str->fdot = 0;
	if (str->fdot && str->fstar <= 0 && !str->u_d)
	{
		free(str->sentence);
		str->sentence = ft_strdup("0");
		str->fdot = 0;
	}
	//printf("first : %d\n", str->first);
	//printf("sec : %d\n", str->second);
	//printf("rem : %d\n", str->remember);
	//printf("zero : %d\n", str->fzero);
	//printf("dot : %d\n", str->fdot);
}

void	conv_for_u(t_type *str)
{
	str->u_d = va_arg(str->ap, unsigned int);
	str->sentence = ft_uitoa_base(str->u_d, 10, "0123456789");
	parse_flag(str);
	print_for_u(str);
}
