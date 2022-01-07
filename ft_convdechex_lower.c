/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convdechex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:52:29 by joaopere          #+#    #+#             */
/*   Updated: 2021/12/07 13:52:32 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_reverse(char *str)
{
    char    *start;
    char    *end;
    char    temp;

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

char  *ft_convdechex_lower(int n)
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
            hexnum[i] = tmp + 87;
            i++;
        }
        n = n / 16;
    }
    rev = ft_reverse(hexnum);
    return (rev);
}

/*
* int main()
* {
*   int n = 254;
*   printf("%s",ft_convdechex_lower(n));
*   return (0);
* }
*/
