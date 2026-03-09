/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:12:40 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:13 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const char *test_strings[] = {
        "Hello, world!",
        "",
        "42 Barcelona",
        "Test with spaces",
        "Special chars !@#$%^&*()",
    };
    size_t i;

    printf("=== TESTING ft_strdup ===\n\n");

    for (i = 0; i < sizeof(test_strings)/sizeof(test_strings[0]); i++)
    {
        const char *original = test_strings[i];
        char *dup_ft = ft_strdup(original);
        char *dup_std = strdup(original);

        if (!dup_ft || !dup_std)
        {
            printf("Memory allocation failed for test case: \"%s\"\n", original);
            free(dup_ft);
            free(dup_std);
            continue;
        }

        printf("Original string: \"%s\"\n", original);
        printf("ft_strdup: \"%s\"\n", dup_ft);
        printf("strdup:    \"%s\"\n", dup_std);

        if (strcmp(dup_ft, dup_std) == 0)
            printf("Result: Both duplicates are identical.\n");
        else
            printf("Result: Duplicates are NOT identical.\n");

        free(dup_ft);
        free(dup_std);
        printf("\n");
    }

    return 0;
}
*/