/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:42:11 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:58:44 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	int values[] = {31, 32, 65, 126, 127};
	int i;

	printf("Testing ft_isprint:\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("Value: %d\n", values[i]);

		// Original function
		if (isprint(values[i]))
			printf("  isprint:    Yes\n");
		else
			printf("  isprint:    No\n");

		// My function
		if (ft_isprint(values[i]))
			printf("  ft_isprint: Yes\n");
		else
			printf("  ft_isprint: No\n");

		printf("\n");
	}
	return (0);
}
*/