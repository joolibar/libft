/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:05:33 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:40 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	char			*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	pos = 0;
	while (pos < ft_strlen(s))
	{
		str[pos] = (*f)(pos, s[pos]);
		pos++;
	}
	str[pos] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

char transform(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return ft_tolower(c);
}

int main(void)
{
    const char *original = "Hello World";
    char *result;

    printf("=== TESTING ft_strmapi ===\n\n");

    result = ft_strmapi(original, transform);
    if (!result)
    {
        printf("Error: memory allocation failed\n");
        return 1;
    }

    printf("Original: '%s'\n", original);
    printf("Transformed: '%s'\n", result);

    free(result);
    return 0;
}
*/
