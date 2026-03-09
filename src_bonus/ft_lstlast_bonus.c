/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:47:58 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;
	t_list	*tmp;

	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");

	head = node1;
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	print_list(head); // Expected: Node 1 -> Node 2 -> Node 3 -> NULL

	// Free all nodes
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
*/
