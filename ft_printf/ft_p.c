/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:59:52 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/02/04 14:07:13 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prints the "0x" and then adds the hexadecimal value of the pointer.

#include "ft_printf.h"

int	ft_p(unsigned long n)
{
	return (ft_putstr("0x") + ft_convdechex_p(n));
}
