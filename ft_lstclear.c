/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:48:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/02/02 14:04:03 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	del(temp);
	temp->next = NULL;
	free(temp);
}

void free_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;
    t_list *new_node = malloc(sizeof(t_list));

    new_node->content = strdup("First Node");
    new_node->next = NULL;

    head = new_node;

    t_list *second_node = malloc(sizeof(t_list));

    second_node->content = strdup("Second Node");
    second_node->next = NULL;

    ft_lstadd_back(&head, second_node);

    printf("Before clearing:\n");
    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&head, free_content);

    printf("After clearing:\n");
    current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}
