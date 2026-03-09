/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:33:21 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:10 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	cc;

	cc = (char) c;
	len = ft_strlen(str);
	if (!str)
		return (NULL);
	while (len >= 0)
	{
		if (str[len] == cc)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c);

int main(void)
{
    const char  *test_str = "Hello, World!";
    int         test_chars[] = {'H', 'W', '!', 'o', 'z', '\0'};
    size_t      i;

    printf("=== TESTING ft_strrchr ===\n\n");
    printf("Test string: \"%s\"\n\n", test_str);

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
    {
        char ch = test_chars[i];
        char *result_ft = ft_strrchr(test_str, ch);
        char *result_orig = strrchr(test_str, ch);

        printf("Searching for '%c' (%d)\n", ch ? ch : '0', ch);

        printf("  Origin: ");
        if (result_orig)
            printf("%s\n", result_orig);
        else
            printf("NULL\n");

        printf("  MyFunc: ");
        if (result_ft)
            printf("%s\n\n", result_ft);
        else
            printf("NULL\n\n");

        if ((result_ft == NULL && result_orig != NULL) ||
            (result_ft != NULL && result_orig == NULL) ||
            (result_ft && result_orig && strcmp(result_ft, result_orig) != 0))
        {
            printf("  ⚠️  Mismatch detected!\n\n");
        }
    }
    return (0);
}
*/