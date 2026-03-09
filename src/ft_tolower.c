/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:43:58 by joolibar          #+#    #+#             */
/*   Updated: 2025/08/26 11:45:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int main(void)
{
    char test_chars[] = {'a', 'z', 'A', 'Z', '0', '!', 'J'};
    int  i;

    printf("=== TESTING ft_tolower ===\n\n");

    for (i = 0; i < (int)(sizeof(test_chars) / sizeof(test_chars[0])); i++)
    {
        char c = test_chars[i];

        printf("Char: '%c' (%d)\n", c, c);
        printf("  Origin: %c\n", tolower(c));
        printf("  MyFunc: %c\n\n", ft_tolower(c));
    }

    return (0);
}
*/
