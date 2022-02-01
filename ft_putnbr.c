/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:19:24 by joao_pereir       #+#    #+#             */
/*   Updated: 2022/02/01 16:21:24 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int i;

    i = 0;
    if (n == -2147483648)
    {
        return(ft_putstr("-2147483648"));
    }
    else
    {
        if (n < 0)
        {
            i += ft_putchar('-');
            n = n * -1;
        }
        if (n > 9) //123 //23
        {
            i += ft_putnbr(n / 10); //23 //3
            i += ft_putchar((n % 10) + '0'); //3 //23
        }
        else
        {
            i += ft_putchar(n + '0');
        }
    }
    return(i); //2
}
