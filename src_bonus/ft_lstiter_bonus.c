/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:47:36 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:15:35 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <stdlib.h>


void to_uppercase(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
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

    snprintf(content1, 20, "node 1");
    snprintf(content2, 20, "node 2");
    snprintf(content3, 20, "node 3");

    t_list *node1 = ft_lstnew(content1);
    t_list *node2 = ft_lstnew(content2);
    t_list *node3 = ft_lstnew(content3);

    node1->next = node2;
    node2->next = node3;
    t_list *head = node1;

    printf("Before applying ft_lstiter:\n");
    print_list(head);

    ft_lstiter(head, to_uppercase);

    printf("After applying ft_lstiter:\n");
    print_list(head);

    while (head)
    {
        t_list *tmp = head;
        head = head->next;
        free(tmp->content);
        free(tmp);
    }
    return 0;
}
*/
