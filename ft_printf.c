/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao_pereira <joao_pereira@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:29:56 by joaopere          #+#    #+#             */
/*   Updated: 2022/01/07 22:38:22 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int(char z, va_list args)
{
	ft_arg_check if (z == 'c')
	{
		return (ft_putchar(va_args(args, int)));
	}
	else if (z == 's')
	{
		return (ft_putstr(va_args(args, char *)));
	}
	else if (z == 'p')
	{
		return (ft_p(va_args(args, unsigned long)));
	}
	else if (z == 'd')
	{
		return (ft_putnbr(va_args(args, int)));
	}
	else if (z == 'i')
	{
		return (ft_putnbr(va_args(args, int)));
	}
	else if (z == 'u')
	{
		return (ft_putnbr(va_args(args, unsigned int)));
	}
	else if (z == 'x')
	{
		return (ft_convdechex_lower(va_args(args, int)));
	}
	else if (z == 'X')
	{
		return (ft_convdechex_upper(va_args(args, int)));
	}
	else if (z == '%')
	{
		return (ft_putchar('%'));
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	size_t i;
	int count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += ft_putchar_fd(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			count += ft_arg_check(args, &format[i]);
			i++;
		}
		va_end(args);
	}
	return (count);
}
