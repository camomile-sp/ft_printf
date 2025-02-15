/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:31:52 by marvin            #+#    #+#             */
/*   Updated: 2025/02/08 18:43:11 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_hexconvert(uintptr_t n)
{
	char	*hex;
	char	x;

	hex = "0123456789abcdef";
	x = hex[n];
	return (x);
}

int	ft_puthex(uintptr_t n)
{
	char		c;
	uintptr_t	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16);
	c = ft_hexconvert(n % 16);
	write(1, &c, 1);
	count++;
	return (count);
}
