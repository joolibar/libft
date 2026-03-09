/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:07:48 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	pos;
	size_t	counter;

	pos = 0;
	counter = 0;
	while (s[pos] != '\0')
	{
		counter++;
		pos++;
	}
	return (counter);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *tests[] = {
		"Hello, 42!",
		"",
		"libft",
		"1234567890",
		"String with spaces"
	};
	int i;

	printf("Testing ft_strlen:\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Test string: \"%s\"\n", tests[i]);

		// Original function
		printf("  strlen:     %zu\n", strlen(tests[i]));

		// My function
		printf("  ft_strlen:  %zu\n", ft_strlen(tests[i]));

		printf("\n");
	}
	return (0);
}
*/