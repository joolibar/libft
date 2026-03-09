/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:32:17 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	int values[] = {'0', '5', '9', 'A', '-', '3'};
	int i;

	printf("Testing ft_isdigit:\n\n");

	for (i = 0; i < 6; i++)
	{
		printf("Value: '%c' (%d)\n", values[i], values[i]);

		// Original function
		if (isdigit(values[i]))
			printf("  isdigit:    Yes\n");
		else
			printf("  isdigit:    No\n");

		// My function
		if (ft_isdigit(values[i]))
			printf("  ft_isdigit: Yes\n");
		else
			printf("  ft_isdigit: No\n");

		printf("\n");
	}
	return (0);
}
*/