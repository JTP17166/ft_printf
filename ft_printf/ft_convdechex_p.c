/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convdechex_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:36:36 by joaopere          #+#    #+#             */
/*   Updated: 2022/02/04 14:02:47 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts the pointer to hexadecimal

#include "ft_printf.h"

int	ft_convdechex_p(unsigned long n)
{
	char	hexnum[20];
	int		i;
	int		tmp;
	char	*rev;

	tmp = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp < 10)
			hexnum[i++] = tmp + 48;
		else
			hexnum[i++] = tmp + 87;
		n = n / 16;
	}
	hexnum[i] = '\0';
	rev = ft_reverse(hexnum);
	ft_putstr(rev);
	return (ft_strlen(hexnum));
}
