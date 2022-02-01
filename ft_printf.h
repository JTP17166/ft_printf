/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:37:02 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/02/01 18:55:43 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int ft_convdechex_lower(int n);
int ft_convdechex_upper(int n);
int ft_p(unsigned long n);
int ft_putchar(int c);
int ft_putnbr(int n);
int ft_putstr(char *s);
size_t  ft_strlen(char *s);
int ft_printf(const char *format, ...);
char	*ft_reverse(char *str);
int  ft_convdechex_p(unsigned long n);
int ft_putnbr_u(unsigned int n);

#endif
