/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:37:02 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/02/04 14:41:09 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_convdechex_lower(unsigned int n);
int		ft_convdechex_p(unsigned long n);
int		ft_convdechex_upper(unsigned int n);
int		ft_p(unsigned long n);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putnbr_u(unsigned int n);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(char *s);
char	*ft_reverse(char *str);

#endif
