/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:48:26 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:10 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*str;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup (""));
	if (len > len_s - start)
		len = len_s - start;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, &s[start], len + 1);
	return (str);
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
    const char *test_str = "Hello, World!";
    char *result;
    
    printf("=== TESTING ft_substr ===\n\n");

    // Case 1
    result = ft_substr(test_str, 7, 5);
    printf("Original: \"%s\"\n", test_str);
    printf("ft_substr(start=7, len=5): \"%s\"\n\n", result);
    free(result);

    // Case 2
    result = ft_substr(test_str, 20, 5);
    printf("ft_substr(start=20, len=5): \"%s\"\n\n", result);
    free(result);

    // Case 3
    result = ft_substr(test_str, 7, 50);
    printf("ft_substr(start=7, len=50): \"%s\"\n\n", result);
    free(result);

    // Case 4
    result = ft_substr(test_str, 20, 50);
    printf("ft_substr(start=20, len=50): \"%s\"\n\n", result);
    free(result);

    // Case 5
    result = ft_substr("", 0, 5);
    printf("ft_substr(empty string, start=0, len=5): \"%s\"\n\n", result);
    free(result);

    return 0;
}
*/