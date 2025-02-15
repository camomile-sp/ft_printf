/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:17:24 by apavlova          #+#    #+#             */
/*   Updated: 2025/02/03 20:18:59 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	ft_putnbr_fd(n, 1);
	if (n <= 0)
		count = 1;
	if ((n < 10 && n > 0) || (n > -10 && n < 0))
		count++;
	if (n >= 10 || n <= -10)
	{
		while (n != 0)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}
