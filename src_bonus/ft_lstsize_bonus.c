/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:48:53 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_list(t_list *head)
{
    t_list *current = head;
    while (current)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");
}

void test_ft_lstsize(void)
{
    printf("Testing ft_lstsize:\n");

    t_list *node1 = ft_lstnew(strdup("Node 1"));
    t_list *node2 = ft_lstnew(strdup("Node 2"));
    t_list *node3 = ft_lstnew(strdup("Node 3"));
    t_list *node4 = ft_lstnew(strdup("Node 4"));
    t_list *node5 = ft_lstnew(strdup("Node 5"));

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    print_list(node1);

    int size = ft_lstsize(node1);
    printf("List size: %d\n", size);

    t_list *tmp;
    while (node1)
    {
        tmp = node1;
        node1 = node1->next;
        free(tmp->content);
        free(tmp);
    }
}

int main(void)
{
    test_ft_lstsize();
    return 0;
}
*/