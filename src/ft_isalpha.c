/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:45:44 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:03 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	int values[] = {'A', 'z', '9', '#', 'M'};
	int i;

	printf("Testing ft_isalpha:\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Value: '%c' (%d)\n", values[i], values[i]);

		// Original function
		if (isalpha(values[i]))
			printf("  isalpha:    Yes\n");
		else
			printf("  isalpha:    No\n");

		// My function
		if (ft_isalpha(values[i]))
			printf("  ft_isalpha: Yes\n");
		else
			printf("  ft_isalpha: No\n");

		printf("\n");
	}
	return (0);
}
*/