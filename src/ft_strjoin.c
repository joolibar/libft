/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:38:54 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:24 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *s1_cases[] = {
        "Hello, ",
        "",
        "Start",
        "123",
        NULL
    };
    const char *s2_cases[] = {
        "World!",
        "OnlySecond",
        "",
        "456",
        "Test"
    };
    size_t i;

    printf("=== TESTING ft_strjoin ===\n\n");

    for (i = 0; i < sizeof(s1_cases)/sizeof(s1_cases[0]); i++)
    {
        const char *s1 = s1_cases[i];
        const char *s2 = s2_cases[i];
        char *joined;

        if (!s1)
            s1 = "";

        printf("s1: \"%s\"\ns2: \"%s\"\n", s1, s2);

        joined = ft_strjoin(s1, s2);
        if (!joined)
        {
            printf("Error: ft_strjoin returned NULL\n\n");
            continue;
        }

        printf("Joined string: \"%s\"\n\n", joined);
        free(joined);
    }

    return 0;
}
*/
