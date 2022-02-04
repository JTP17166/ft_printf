/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:53:31 by joaopere          #+#    #+#             */
/*   Updated: 2022/02/04 12:56:23 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_reverse(char *str)
{
	char	*start;
	char	*end;
	char	temp;

	if (str == 0)
		return (0);
	if (*str == 0)
		return (0);
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
