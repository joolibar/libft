/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:41:31 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 17:57:54 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
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
	int values[] = {'A', 'z', '5', '#', ' ', '0'};
	int i;

	printf("Testing ft_isalnum:\n\n");

	for (i = 0; i < 6; i++)
	{
		printf("Value: '%c' (%d)\n", values[i], values[i]);

		// Original function
		if (isalnum(values[i]))
			printf("  isalnum:    Yes\n");
		else
			printf("  isalnum:    No\n");

		// My function
		if (ft_isalnum(values[i]))
			printf("  ft_isalnum: Yes\n");
		else
			printf("  ft_isalnum: No\n");

		printf("\n");
	}
	return (0);
}
*/