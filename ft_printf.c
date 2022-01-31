/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:29:56 by joaopere          #+#    #+#             */
/*   Updated: 2022/01/31 19:00:48 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_arg_check(char z, va_list args)
{
	if(z == 'c')
	{
		return(ft_putchar(va_arg(args, int)));
	}
	else if(z == 's')
	{
		return(ft_putstr(va_arg(args, char *)));
	}
	else if(z == 'p')
	{
		return(ft_p(va_arg(args, unsigned long)));
	}
	else if(z == 'd')
	{
		return(ft_putnbr(va_arg(args, int)));
	}
	else if(z == 'i')
	{
		return(ft_putnbr(va_arg(args, int)));
	}
	else if(z == 'u')
	{
		return(ft_putnbr(va_arg(args, unsigned int)));
	}
	else if(z == 'x')
	{
		return(ft_convdechex_lower(va_arg(args, int)));
	}
	else if(z == 'X')
	{
		return(ft_convdechex_upper(va_arg(args, int)));
	}
	else if(z == '%')
	{
		return(ft_putchar('%'));
	}
	return(0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while(format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += ft_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			count += ft_arg_check(format[i], args);
			i++;
		}
		va_end(args);
	}
	return(count);
}
