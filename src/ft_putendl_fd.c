/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:57:19 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:51 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = 1; // stdout
    char *str = "Hello, 42 Barcelona!";

    printf("=== TESTING ft_putendl_fd ===\n\n");
    ft_putendl_fd(str, fd); // Should print the string followed by a newline

    return 0;
}
*/
