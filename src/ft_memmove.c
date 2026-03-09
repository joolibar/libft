/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:41:41 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	pos;
	char	*s;
	char	*d;

	if (!dest && !src)
		return (NULL);
	d = (char *) dest;
	s = (char *) src;
	pos = 0;
	if (d < s)
	{
		while (pos < len)
		{
			d[pos] = s[pos];
			pos++;
		}
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dest);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

void	print_bytes(const char *label, const char *buf, size_t n)
{
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++)
        printf("%02X ", (unsigned char)buf[i]);
    printf("\n");
}

int	main(void)
{
	char src1[] = "Hello 42 Barcelona";
	char dest1[30] = {0};
	char dest2[30] = {0};

	printf("Testing ft_memmove:\n\n");

	// Copy first 10 bytes
	ft_memmove(dest1, src1, 10);
	memmove(dest2, src1, 10);

	printf("Copy first 10 bytes:\n");
	print_bytes("  ft_memmove      ", dest1, 10);
	print_bytes("  Original memmove", dest2, 10);
	printf("\n");

	// Copy full buffer
	char src2[] = "Hello, I am a 42 Barcelona student.";
	char dest3[50] = {0};
	char dest4[50] = {0};

	ft_memmove(dest3, src2, sizeof(src2));
	memmove(dest4, src2, sizeof(src2));

	printf("Copy full buffer:\n");
	print_bytes("  ft_memmove      ", dest3, sizeof(src2));
	print_bytes("  Original memmove", dest4, sizeof(src2));
	printf("\n");

	// Edge case: overlapping buffers
	char overlap[20] = "1234567890";
	ft_memmove(overlap + 2, overlap, 5);
	printf("Overlapping buffer test:\n");
	print_bytes("  Result", overlap, 12);

	return (0);
}
*/