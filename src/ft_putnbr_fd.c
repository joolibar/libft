/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:53:08 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:54 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			digit = n + 48;
			write(fd, &digit, 1);
		}
	}
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <unistd.h>

int main(void)
{
    int fd = 1; // stdout

    // Test numbers
    int nums[] = {-2147483648, -42, 0, 4, 2442};
    int count = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < count; i++)
    {
        ft_putnbr_fd(nums[i], fd);
        ft_putchar_fd('\n', fd); // Print newline after each number
    }

    return 0;
}
*/
