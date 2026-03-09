/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:48:29 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:10 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *) str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && i + j < len)
		{
			j++;
			if (to_find[j] == 0)
				return ((char *) str + i);
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *haystack = "Hello, World! This is an example.";
    const char *needles[] = {"World", "Planet", "example", "", "Hello,", "42"};
    size_t lens[] = {30, 30, 30, 30, 5, 10};
    size_t num_tests = sizeof(needles) / sizeof(needles[0]);
    size_t i;

    printf("=== TESTING ft_strnstr ===\n\n");

    for (i = 0; i < num_tests; i++)
    {
        const char *to_find = needles[i];
        size_t len = lens[i];

        char *result_ft = ft_strnstr(haystack, to_find, len);
        char *result_orig = strnstr(haystack, to_find, len);

        printf("Searching for \"%s\" in \"%s\" with len %zu\n",
				to_find, haystack, len);

        printf("  Original: ");
        if (result_orig != NULL)
            printf("%s\n", result_orig);
        else
            printf("NULL\n");

        printf("  MyFunc:   ");
        if (result_ft != NULL)
            printf("%s\n", result_ft);
        else
            printf("NULL\n");

        printf("\n");
    }

    return 0;
}
*/
