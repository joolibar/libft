/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:04:51 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:12:51 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;

	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    size_t i;

    printf("=== TESTING ft_calloc ===\n\n");

    int *ptr_ft = ft_calloc(nmemb, size);
    int *ptr_orig = calloc(nmemb, size);

    if (!ptr_ft || !ptr_orig)
    {
        printf("Memory allocation failed.\n");
        free(ptr_ft);
        free(ptr_orig);
        return 1;
    }

    printf("Contents of array allocated with ft_calloc:\n");
    for (i = 0; i < nmemb; i++)
        printf("%d ", ptr_ft[i]);
    printf("\n");

    printf("Contents of array allocated with calloc:\n");
    for (i = 0; i < nmemb; i++)
        printf("%d ", ptr_orig[i]);
    printf("\n");

    free(ptr_ft);
    free(ptr_orig);

    return 0;
}
*/
