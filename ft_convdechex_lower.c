/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convdechex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:52:29 by joaopere          #+#    #+#             */
/*   Updated: 2022/02/01 20:15:04 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_reverse(char *str)
{
    char	*start;
    char	*end;
    char	temp;

	if (str == 0)
	{
		return(0);
	}
	if (*str == 0)
	{
		return(0);
	}
	start = str;
	end = start + ft_strlen(str) - 1;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		++start;
        --end;
    }
    return (str);
}

int  ft_convdechex_lower(int n)
{
    char    hexnum[20];
    int        i;
    int        tmp;
    int sign;
    char    *rev;

    tmp = 0;
    i = 0;
    
    if (n == 0)
    {
        ft_putchar('0');
        return(1);
    }
    sign = ((n > 0) - (n < 0));
    while (n != 0)
    {
        tmp = n % 16;
        if (tmp < 10)
            hexnum[i] = tmp + 48;
        else
            hexnum[i] = tmp + 87;
        i++;       
        hexnum[i] = 0;
        n = n / 16;
    }
    
    rev = ft_reverse(hexnum);
    ft_putstr(rev);
    return (ft_strlen(hexnum));
}
