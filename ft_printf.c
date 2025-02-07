/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:54:00 by apavlova          #+#    #+#             */
/*   Updated: 2025/01/24 20:55:14 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += ft_putchar(va_arg(args, int));
			if (*format == 's')
				count += ft_putstr(va_arg(args, char *));
			if (*format == '%')
				count += ft_putchar('%');
			if (*format == 'd' || *format == 'i')
				count += ft_putnbr(va_arg(args, int));
			if (*format == 'u')
				count += ft_putnbr_uns(va_arg(args, unsigned int));
			if (*format == 'x')
				count += ft_puthex(va_arg(args, unsigned long));
			if (*format == 'X')
				count += ft_puthex_up(va_arg(args, unsigned int));
			if (*format == 'p')
				count += ft_putptr(va_arg(args, void *));
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
