/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:32:58 by joaopere          #+#    #+#             */
/*   Updated: 2022/02/04 14:21:29 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar((n % 10) + '0');
	}
	else
	{
		i += ft_putchar(n + '0');
	}
	return (i);
}
