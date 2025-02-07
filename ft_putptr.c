/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:16:02 by apavlova          #+#    #+#             */
/*   Updated: 2025/02/07 19:16:52 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;
	
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = write (1, "0x", 2);
	count += ft_puthex((unsigned long)ptr);
	return (count);
}
