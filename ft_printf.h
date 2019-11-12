/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:02:35 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/12 13:31:58 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

typedef struct	s_type
{
	va_list		ap;
	int			fdot;
	int			fless;
	int			fzero;
	int			fstar;
	int			first;
	int			second;
	int 		remember;

	int			d_i;
	unsigned int u_d;
	char		*sentence;
	char		car;
	void		*p;
}				t_type;

int		ft_printf(char *format, ...);
void	initialize_all(t_type *str);
int		find_flags(char *format, t_type *str);
void	find_conversion(t_type *str, char *format);
void	conv_for_d(t_type *str);
void    conv_for_s(t_type *str);
void    conv_for_c(t_type *str);
void    conv_for_p(t_type *str);
void    conv_for_x(t_type *str);
void    conv_for_X(t_type *str);
void    conv_for_pourcentage(t_type *str);
void    conv_for_u(t_type *str);

#endif
