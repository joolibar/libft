/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:41:02 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:57:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*tmp;
	unsigned int	pos;

	tmp = (unsigned char *) str;
	pos = 0;
	while (pos < n)
	{
		tmp[pos] = 0;
		pos++;
	}
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char arr1[10] = "123456789";
	char arr2[10] = "123456789";
	int i;

	printf("Testing ft_bzero:\n\n");

	// Original function
	bzero(arr1, 5);
	printf("Original bzero: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	// My function
	ft_bzero(arr2, 5);
	printf("ft_bzero:       ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n\n");

	// Additional test: zero bytes
	char arr3[5] = "ABCD";
	char arr4[5] = "ABCD";

	bzero(arr3, 0);
	ft_bzero(arr4, 0);

	printf("Zero bytes test:\n");
	printf("Original bzero: %s\n", arr3);
	printf("ft_bzero:       %s\n", arr4);

	return (0);
}
*/