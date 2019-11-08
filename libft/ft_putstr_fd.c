/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:15:12 by fmarckma          #+#    #+#             */
/*   Updated: 2019/10/25 10:15:24 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s && fd >= 0)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
