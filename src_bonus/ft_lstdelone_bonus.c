/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:47:15 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

void del(void *content)
{
    free(content);
}

int main(void)
{
    char *content = malloc(20 * sizeof(char));
    if (!content)
        return 1;
    snprintf(content, 20, "Node content");

    t_list *node = ft_lstnew(content);

    printf("Before deletion: %s\n", (char *)node->content);

    ft_lstdelone(node, del);

    // After deletion, node is invalid and should not be used
    printf("Node deleted successfully.\n");

    return 0;
}
*/
