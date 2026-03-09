/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:40:39 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:12:32 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

static int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *tests[] = {
        "   -123",
        "42",
        "   +456abc",
        "abc",
        "2147483647",
        "-2147483648",
        "   0000123",
        "",
        "     ",
        "0"
    };
    size_t num_tests = sizeof(tests) / sizeof(tests[0]);
    size_t i;

    printf("=== TESTING ft_atoi ===\n\n");

    for (i = 0; i < num_tests; i++)
    {
        const char *test = tests[i];
        int result_orig = atoi(test);
        int result_ft = ft_atoi(test);

        printf("Test case: \"%s\"\n", test);
        printf("  Original => %d\n", result_orig);
        printf("  MyFunc   => %d\n\n", result_ft);
    }

    return 0;
}
*/
