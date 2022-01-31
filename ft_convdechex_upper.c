/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convdechex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:47:08 by joaopere          #+#    #+#             */
/*   Updated: 2022/01/31 17:25:07 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int  ft_convdechex_upper(int n)
{
    char    hexnum[1000];
    int        i;
    int        tmp;
    char    *rev;

    tmp = 0;
    i = 0;
    
    while (n != 0)
    {
        tmp = n % 16;
        if (tmp < 10)
        {
            hexnum[i] = tmp + 48;
            i++;
        }
        else
        {
            hexnum[i] = tmp + 55;
            i++;
        }
	    n = n / 16;
	}
    rev = ft_reverse(hexnum);
    ft_putstr(rev);
    return (ft_strlen(hexnum));
}

/*
* int main()
* {
*   int n = 254;
*   printf("%s",ft_convdechex(n));
*   return (0);
* }
*/
