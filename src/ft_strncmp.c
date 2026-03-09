/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:23:44 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:47 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

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
    size_t num_tests = sizeof(test_pairs) / sizeof(test_pairs[0]);
    size_t n_values[] = {3, 3, 12, 4, 1, 10};
    size_t i;

    printf("=== TESTING ft_strncmp ===\n\n");

    for (i = 0; i < num_tests; i++)
    {
        const char *s1 = test_pairs[i][0];
        const char *s2 = test_pairs[i][1];
        size_t n = n_values[i];
        int result_ft = ft_strncmp(s1, s2, n);
        int result_orig = strncmp(s1, s2, n);

        printf("Comparing first %zu chars: \"%s\" vs \"%s\"\n", n, s1, s2);

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
