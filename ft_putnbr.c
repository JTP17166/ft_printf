/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao_pereira <joao_pereira@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:19:24 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/01/07 22:22:40 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	}
	return (i);
}
