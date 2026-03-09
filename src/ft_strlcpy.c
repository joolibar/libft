/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:08:19 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size > 0)
	{
		while (pos < size - 1 && src[pos] != '\0')
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (ft_strlen(src));
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst1[20];
	char dst2[5];
	const char *src = "Hello, 42 Barcelona!";
	size_t result;

	printf("Testing ft_strlcpy:\n\n");

	// Case 1: destination buffer bigger than source
	result = ft_strlcpy(dst1, src, sizeof(dst1));
	printf("Buffer 20 bytes:\n");
	printf("  ft_strlcpy dst: '%s'\n", dst1);
	printf("  Length returned: %zu\n\n", result);

	// Case 2: destination buffer smaller than source
	result = ft_strlcpy(dst2, src, sizeof(dst2));
	printf("Buffer 5 bytes:\n");
	printf("  ft_strlcpy dst: '%s'\n", dst2);
	printf("  Length returned: %zu\n\n", result);

	// Case 3: size 0
	char dst3[10] = "ABCDEFG";
	result = ft_strlcpy(dst3, src, 0);
	printf("Buffer size 0:\n");
	printf("  ft_strlcpy dst: '%s'\n", dst3);
	printf("  Length returned: %zu\n", result);

	return (0);
}
*/