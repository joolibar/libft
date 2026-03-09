/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:41:44 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:20 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			pos;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	pos = 0;
	while (pos < n)
	{
		if (str1[pos] != str2[pos])
			return (str1[pos] - str2[pos]);
		pos++;
	}
	return (0);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    const char *test_pairs[][2] = {
        {"hello", "hello"},
        {"abc", "abd"},
        {"42Barcelona", "42Barcelona"},
        {"Test", "Test123"},
        {"a", "b"},
        {"same", "same"}
    };
    size_t n_values[] = {3, 3, 12, 4, 1, 10};
    size_t num_tests = sizeof(test_pairs) / sizeof(test_pairs[0]);
    size_t i;

    printf("=== TESTING ft_memcmp ===\n\n");

    for (i = 0; i < num_tests; i++)
    {
        const char *s1 = test_pairs[i][0];
        const char *s2 = test_pairs[i][1];
        size_t n = n_values[i];

        int result_ft = ft_memcmp(s1, s2, n);
        int result_orig = memcmp(s1, s2, n);

        printf("Comparing first %zu bytes: \"%s\" vs \"%s\"\n", n, s1, s2);

        printf("  Origin: ");
        if (result_orig < 0)
            printf("s1 < s2. Result: %d\n", result_orig);
        else if (result_orig > 0)
            printf("s1 > s2. Result: %d\n", result_orig);
        else
            printf("s1 == s2. Result: %d\n", result_orig);

        printf("  MyFunc: ");
        if (result_ft < 0)
            printf("s1 < s2. Result: %d\n", result_ft);
        else if (result_ft > 0)
            printf("s1 > s2. Result: %d\n", result_ft);
        else
            printf("s1 == s2. Result: %d\n", result_ft);

        printf("\n");
    }

    return 0;
}
*/