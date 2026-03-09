/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:27:42 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:15 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			pos;
	unsigned char	*str;
	unsigned char	cp;

	str = (unsigned char *) s;
	cp = (unsigned char) c;
	pos = 0;
	while (pos < n)
	{
		if (str[pos] == cp)
			return ((void *)&str[pos]);
		pos++;
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
    const char *test_str = "Hello, world!";
    int test_chars[] = {'H', 'w', '!', 'z', 0};
    size_t i;

    printf("=== TESTING ft_memchr ===\n\n");
    printf("Test string: \"%s\"\n\n", test_str);

    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
    {
        char ch = test_chars[i];
        char *result_ft = (char *) ft_memchr(test_str, ch, strlen(test_str));
        char *result_orig = (char *) memchr(test_str, ch, strlen(test_str));

        printf("Searching for '%c' (%d)\n", ch ? ch : '0', ch);

        printf("  Origin: ");
        if (result_orig)
            printf("found at position: %ld\n", result_orig - test_str);
        else
            printf("not found\n");

        printf("  MyFunc: ");
        if (result_ft)
            printf("found at position: %ld\n", result_ft - test_str);
        else
            printf("not found\n");

        if ((result_ft == NULL && result_orig != NULL) ||
            (result_ft != NULL && result_orig == NULL) ||
            (result_ft && result_orig && result_ft != result_orig))
        {
            printf("  ⚠️  Mismatch detected!\n");
        }

        printf("\n");
    }

    return 0;
}
*/
