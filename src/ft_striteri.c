/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:56:17 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:17 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		(*f)(pos, &s[pos]);
		pos++;
	}
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>

void toggle_case(unsigned int i, char *c)
{
    if ((i % 2) == 0)
        *c = ft_toupper(*c);
    else
        *c = ft_tolower(*c);
}

int main(void)
{
    char test_strings[][50] = {
        "Hello 42 Barcelona",
        "abcdef",
        "1234",
        "",
        "MiXeDCaSe"
    };
    size_t i;

    printf("=== TESTING ft_striteri ===\n\n");

    for (i = 0; i < sizeof(test_strings)/sizeof(test_strings[0]); i++)
    {
        char original[50];
        int j = 0;

        while (test_strings[i][j] != '\0')
        {
            original[j] = test_strings[i][j];
            j++;
        }
        original[j] = '\0';

        ft_striteri(test_strings[i], toggle_case);

        printf("Original: \"%s\"\n", original);
        printf("Modified: \"%s\"\n\n", test_strings[i]);
    }

    return 0;
}
*/
