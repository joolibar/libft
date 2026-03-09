/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:07:21 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:10 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (ft_strdup(""));
	i = 0;
	while (i < ft_strlen(s1) && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while ((j - 1) > i && ft_strchr(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, (unsigned int)i, j - i));
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
    const char *test_str = "  \t  Hello, World! \n  ";
    const char *set = " \t\n";
    char *result;

    printf("=== TESTING ft_strtrim ===\n\n");

    // Case 1: Normal trimming
    result = ft_strtrim(test_str, set);
    printf("Original: '%s'\n", test_str);
    printf("ft_strtrim: '%s'\n\n", result);
    free(result);

    // Case 2: No characters to trim
    result = ft_strtrim("Hello", set);
    printf("Original: 'Hello'\n");
    printf("ft_strtrim: '%s'\n\n", result);
    free(result);

    // Case 3: All characters to trim
    result = ft_strtrim("   \t\n  ", set);
    printf("Original: '   \\t\\n  '\n");
    printf("ft_strtrim: '%s'\n\n", result);
    free(result);

    // Case 4: Empty string
    result = ft_strtrim("", set);
    printf("Original: ''\n");
    printf("ft_strtrim: '%s'\n\n", result);
    free(result);

    return 0;
}
*/