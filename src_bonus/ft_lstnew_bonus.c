/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:48:34 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_ft_lstnew(void)
{
    printf("Testing ft_lstnew:\n");

    char *content = strdup("Hello, World!");
    if (!content)
    {
        perror("strdup failed");
        return;
    }

    t_list *node = ft_lstnew(content);
    if (node)
    {
        printf("Node created successfully!\n");
        printf("Content: %s\n", (char *)node->content);
        printf("Next: %p\n", (void *)node->next);
    }
    else
    {
        printf("Node creation failed!\n");
        free(content);
        return;
    }

    free(node->content);
    free(node);
}

int main(void)
{
    test_ft_lstnew();
    return 0;
}
*/