/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:37:02 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/01/25 19:18:53 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <stdarg.h>

char *ft_convdechex_lower(int n);
char *ft_convdechex_upper(int n);
int ft_p(unsigned long n);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *s);
size_t  ft_strlen(char *s);
int ft_printf(const char *format, ...);

#endif
