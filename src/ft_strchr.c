/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:54:42 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:03 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	pos;
	char	cc;

	pos = 0;
	cc = (char) c;
	while (str[pos])
	{
		if (str[pos] == cc)
			return ((char *)&str[pos]);
		pos++;
	}
	if (str[pos] == cc)
		return ((char *) &str[pos]);
	return (NULL);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c);

int main(void)
{
    const char  *test_str = "Hello, World!";
    int         test_chars[] = {'H', 'W', '!', 'o', 'z', '\0'};
    size_t      i;

    printf("=== TESTING ft_strchr ===\n\n");
    printf("Test string: \"%s\"\n\n", test_str);

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
    {
        char ch = test_chars[i];
        char *result_ft = ft_strchr(test_str, ch);
        char *result_orig = strchr(test_str, ch);

        printf("Searching for '%c' (%d)\n", ch ? ch : '0', ch);
        printf("  Origin: %s\n", result_orig ? result_orig : "NULL");
        printf("  MyFunc: %s\n\n", result_ft ? result_ft : "NULL");

        if ((result_ft == NULL && result_orig != NULL) ||
            (result_ft != NULL && result_orig == NULL) ||
            (result_ft && result_orig && strcmp(result_ft, result_orig) != 0))
        {
            printf("Mismatch detected!\n\n");
        }
    }
    return (0);
}
*/