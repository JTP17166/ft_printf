/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao_pereira <joao_pereira@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:37:02 by joao_pereir       #+#    #+#             */
/*   Updated: 2021/12/22 15:11:06 by joao_pereir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char *ft_convdechex_lower(int n);
char *ft_convdechex_upper(int n);
int ft_p(unsigned long n);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_putstr(char *s);
size_t  ft_strlen(char *s);

#endif
