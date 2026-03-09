/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:05:16 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:08 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int values[] = {0, 65, 127, 200, -5};
	int i;

	printf("Testing ft_isascii:\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Value: %d\n", values[i]);

		// Original function
		if (isascii(values[i]))
			printf("  isascii:    Yes\n");
		else
			printf("  isascii:    No\n");

		// My function
		if (ft_isascii(values[i]))
			printf("  ft_isascii: Yes\n");
		else
			printf("  ft_isascii: No\n");

		printf("\n");
	}
	return (0);
}
*/