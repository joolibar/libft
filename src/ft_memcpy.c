/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:41:09 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				pos;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	pos = 0;
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (pos < n)
	{
		d[pos] = s[pos];
		pos++;
	}
	return (dst);
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
    {
        printf("%02X ", (unsigned char)buf[i]);
    }
    printf("\n");
}

int	main(void)
{
	char src1[] = "Hola 42 Barcelona";
	char dest1[30] = {0};
	char dest2[30] = {0};

	printf("Testing ft_memcpy:\n\n");

	ft_memcpy(dest1, src1, 10);
	memcpy(dest2, src1, 10);

	printf("Copy first 10 bytes:\n");
	print_bytes("  ft_memcpy      ", dest1, 10);
	print_bytes("  Original memcpy", dest2, 10);
	printf("\n");

	char src2[] = "Hola soy estudiante de 42 Barcelona.";
	char dest3[50] = {0};
	char dest4[50] = {0};

	ft_memcpy(dest3, src2, sizeof(src2));
	memcpy(dest4, src2, sizeof(src2));

	printf("Copy full buffer:\n");
	print_bytes("  ft_memcpy      ", dest3, sizeof(src2));
	print_bytes("  Original memcpy", dest4, sizeof(src2));
	printf("\n");

	// Additional test: 0 bytes
	char src3[] = "Test";
	char dest5[5] = "AAAA";
	char dest6[5] = "AAAA";

	ft_memcpy(dest5, src3, 0);
	memcpy(dest6, src3, 0);

	printf("Copy 0 bytes:\n");
	print_bytes("  ft_memcpy      ", dest5, 4);
	print_bytes("  Original memcpy", dest6, 4);
	printf("\n");

	return (0);
}
 */