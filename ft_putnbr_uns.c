/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:02:51 by apavlova          #+#    #+#             */
/*   Updated: 2025/02/03 22:03:16 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putnbr_uns(unsigned int n)
{
	int	count;
	char	c;
	
	count = 0;
	if (n >= 10)
		ft_putnbr_uns(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	if (n == 0)
		count = 1;
	if (n < 10 && n > 0)
		count++;
	if (n >= 10)
	{
		while (n != 0)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}
