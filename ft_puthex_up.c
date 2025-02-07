/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:05:30 by apavlova          #+#    #+#             */
/*   Updated: 2025/02/07 19:05:34 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char ft_hexconvert(unsigned int n)
{
    char    *hex;
    char    x;

    hex = "0123456789ABCDEF";
    x = hex[n];
    return (x);
}

int    ft_puthex_up(unsigned int n)
{
    char    c;
    unsigned int	count;

    count = 0;
    if (n >= 16)
         count += ft_puthex_up(n / 16);
    c = ft_hexconvert(n % 16);
    write(1, &c, 1);
    count++;
    return (count);
}
