/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:46:07 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned int	i;

	tmp = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		tmp [i] = (unsigned char) c;
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[20] = "Hello 42Barcelona";
	char str2[20] = "Hello 42Barcelona";

	printf("Testing ft_memset:\n\n");

	// Original function
	printf("Original memset: %s\n", (char *)memset(str2, '*', 5));

	// My function
	printf("ft_memset:       %s\n", (char *)ft_memset(str1, '*', 5));

	printf("\n");

	// Additional test: zero bytes
	char str3[10] = "ABCDEFG";
	char str4[10] = "ABCDEFG";

	printf("Original memset (0 bytes): %s\n", (char *)memset(str4, 'X', 0));
	printf("ft_memset (0 bytes):       %s\n", (char *)ft_memset(str3, 'X', 0));

	return (0);
}
*/