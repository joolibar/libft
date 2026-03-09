/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:49:07 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:09 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long number);

char	*ft_itoa(int n)
{
	char	*str_num;
	int		num_len;
	long	num_long;

	num_long = (long) n;
	num_len = count_digits(num_long);
	str_num = (char *) ft_calloc((num_len + 1), sizeof(char));
	if (!str_num)
		return (NULL);
	if (num_long == 0)
		str_num[0] = '0';
	if (num_long < 0)
	{
		str_num[0] = '-';
		num_long *= -1;
	}
	num_len--;
	while (num_long != 0)
	{
		str_num[num_len] = (num_long % 10) + '0';
		num_len--;
		num_long /= 10;
	}
	return (str_num);
}

static int	count_digits(long number)
{
	int	counter;

	counter = 0;
	if (number <= 9 && number >= 0)
		return (1);
	else if (number < 0)
	{
		counter++;
		number *= -1;
	}
	while (number != 0)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int test_numbers[] = {
        0,
        42,
        -42,
        2147483647,
        -2147483648,
        100000,
        -100000
    };
    size_t i;

    printf("=== TESTING ft_itoa ===\n\n");

    for (i = 0; i < sizeof(test_numbers)/sizeof(test_numbers[0]); i++)
    {
        int num = test_numbers[i];
        char *str_ft = ft_itoa(num);
        char buffer[50]; // For standard snprintf conversion
        snprintf(buffer, sizeof(buffer), "%d", num);

        if (!str_ft)
        {
            printf("Memory allocation failed for number: %d\n\n", num);
            continue;
        }

        printf("Number: %d\n", num);
        printf("ft_itoa:    %s\n", str_ft);
        printf("sprintf:    %s\n", buffer);

        if (strcmp(str_ft, buffer) == 0)
            printf("Result: Conversion is correct.\n");
        else
            printf("Result: Conversion is INCORRECT.\n");

        free(str_ft);
        printf("\n");
    }

    return 0;
}
*/
