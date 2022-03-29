/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:19:24 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/02/04 14:20:51 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes a number.

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	else
	{
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
	}
	return (i);
}
