/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_gestionnary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:15:28 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/08 15:46:26 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

void	initialize_all(t_type *str)
{
	str->fdot = 0;
	str->fless = 0;
	str->fzero = 0;
	str->fstar = 0;
	str->first = 0;
	str->second = 0;
	str->remember = 0;
	str->d_i = 0;
	str->sentence = NULL;
}