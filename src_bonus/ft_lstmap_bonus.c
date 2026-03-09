/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:48:15 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:22:33 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static t_list	*create_node(void *content, void *(*f)(void *),
					void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_node = create_node(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

static t_list	*create_node(void *content, void *(*f)(void *),
					void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;

	new_content = f(content);
	if (!new_content)
		return (NULL);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to uppercase first character of string content
void *uppercase_first(void *content)
{
    char *str = (char *)content;
    if (!str)
        return NULL;
    char *new_str = strdup(str);
    if (!new_str)
        return NULL;
    if (new_str[0])
        new_str[0] = new_str[0] - 32;
    return new_str;
}

// Delete function: free content
void del(void *content)
{
    free(content);
}

// Print the list
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

int main(void)
{
    // Create nodes with dynamic strings
    t_list *node1 = ft_lstnew(strdup("node 1"));
    t_list *node2 = ft_lstnew(strdup("node 2"));
    t_list *node3 = ft_lstnew(strdup("node 3"));

    // Build list
    t_list *head = node1;
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    printf("Original list:\n");
    print_list(head);

    // Map function over list
    t_list *mapped_list = ft_lstmap(head, uppercase_first, del);
    printf("\nMapped list (first letters uppercased):\n");
    print_list(mapped_list);

    // Free original and mapped lists
    ft_lstclear(&head, del);
    ft_lstclear(&mapped_list, del);

    return 0;
}
*/
