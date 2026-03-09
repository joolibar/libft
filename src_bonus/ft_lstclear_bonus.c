/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:43:04 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
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

void print_list(t_list *head)
{
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");
}

int main(void)
{
    char *content1 = malloc(20 * sizeof(char));
    char *content2 = malloc(20 * sizeof(char));
    char *content3 = malloc(20 * sizeof(char));
    if (!content1 || !content2 || !content3)
        return 1;

    snprintf(content1, 20, "Node 1");
    snprintf(content2, 20, "Node 2");
    snprintf(content3, 20, "Node 3");

    t_list *node1 = ft_lstnew(content1);
    t_list *node2 = ft_lstnew(content2);
    t_list *node3 = ft_lstnew(content3);

    node1->next = node2;
    node2->next = node3;
    t_list *head = node1;

    printf("Before clearing the list:\n");
    print_list(head);

    ft_lstclear(&head, del);

    printf("After clearing the list:\n");
    if (head == NULL)
        printf("List is empty.\n");

    return 0;
}
*/
