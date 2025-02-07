/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavlova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:36:30 by apavlova          #+#    #+#             */
/*   Updated: 2025/01/26 17:38:46 by apavlova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	count;
	
	ft_printf("Well, %s\n", "hello");
	count = ft_printf("Well, %s\n", "hello");
	printf("%d\n", count);

	printf("Well, %s\n", "hello");
	count = printf("Well, %s\n", "hello");
	printf("%d\n", count);

	ft_printf("Well, hello%c\n", '.');
	printf("Well, hello%c\n", '.');

	ft_printf("Procent: %%\n");
	printf("Procent: %%\n");

	ft_printf("NULL: %s\n", NULL);
	printf("NULL: %s\n", (char *)NULL);
	
	ft_printf("Number: %d\n", 0);
	count = ft_printf("Number: %d\n", 0);
	printf("%d\n", count);
	
	printf("Number: %d\n", 0);
	count = printf("Number: %d\n", 0);
	printf("%d\n", count);

	ft_printf("Number: %u\n", 123456789);
	count = ft_printf("Number: %u\n", 123456789);
	printf("%d\n", count);
	
	printf("Number: %u\n", 123456789);
	count = printf("Number: %u\n", 123456789);
	printf("%d\n", count);
	
	count = printf("Hex: %x", 123);
	ft_printf("Hex: %x, %d\n", 123, count);
	printf("%d\n", ft_printf("Hex: %x", 123));
	
	ft_printf("Hex: %X\n", 123);
	printf("%d\n", ft_printf("Hex: %X", 123));
	
	ft_printf("Pointer: %X\n", (void *)123456);
	printf("%d\n", ft_printf("Pointer: %X", (void *)123456));
	
	return (0);
}
