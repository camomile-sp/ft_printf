/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 21:31:52 by marvin            #+#    #+#             */
/*   Updated: 2025/02/05 21:31:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char ft_hexconvert(unsigned int n)
{
    char    *hex;
    char    x;

    hex = "0123456789abcdef";
    x = hex[n];
    return (x);
}

int    ft_puthex(unsigned int n)
{
    char    c;
    unsigned int	count;

    count = 0;
    if (n >= 16)
         count += ft_puthex(n / 16);
    c = ft_hexconvert(n % 16);
    write(1, &c, 1);
    count++;
    return (count);
}
