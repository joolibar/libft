/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:35:55 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	i = 0;
	j = len_dst;
	while (src[i] && j < (dstsize - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (len_dst + len_src);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst1[20] = "Hello, ";
	char dst2[10] = "Hello, ";
	const char *src = "world!";
	size_t result;

	printf("Testing ft_strlcat:\n\n");

	// Case 1: enough space
	result = ft_strlcat(dst1, src, sizeof(dst1));
	printf("Buffer 20 bytes:\n");
	printf("  ft_strlcat dst: '%s'\n", dst1);
	printf("  Length returned: %zu\n\n", result);

	// Case 2: not enough space
	result = ft_strlcat(dst2, src, sizeof(dst2));
	printf("Buffer 10 bytes:\n");
	printf("  ft_strlcat dst: '%s'\n", dst2);
	printf("  Length returned: %zu\n\n", result);

	// Case 3: size 0
	char dst3[10] = "ABC";
	result = ft_strlcat(dst3, src, 0);
	printf("Buffer size 0:\n");
	printf("  ft_strlcat dst: '%s'\n", dst3);
	printf("  Length returned: %zu\n", result);

	return (0);
}
*/