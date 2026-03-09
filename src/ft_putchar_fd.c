/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:20:38 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:46 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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

    printf("=== TESTING ft_putchar_fd ===\n\n");
    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd(' ', fd);
    ft_putchar_fd('W', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('r', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('d', fd);
    ft_putchar_fd('!', fd);
    ft_putchar_fd('\n', fd);

    return 0;
}
*/