/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:44:19 by joolibar          #+#    #+#             */
/*   Updated: 2025/08/26 11:45:28 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int main(void)
{
    char test_chars[] = {'a', 'z', 'A', 'Z', '0', '!', 'j'};
    int  i;

    printf("=== TESTING ft_toupper ===\n\n");

    for (i = 0; i < (int)(sizeof(test_chars) / sizeof(test_chars[0])); i++)
    {
        char c = test_chars[i];

        printf("Char: '%c' (%d)\n", c, c);
        printf("  Origin: %c\n", toupper(c));
        printf("  MyFunc: %c\n\n", ft_toupper(c));
    }

    return (0);
}
*/