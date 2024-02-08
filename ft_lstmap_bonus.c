/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:32:51 by danpalac          #+#    #+#             */
/*   Updated: 2024/02/08 14:15:37 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (!lst || (!f && !del))
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		(current = ft_lstnew(f(lst->content)));
		if (!current)
		{
			while (new_list)
			{
				current = new_list->next;
				del(new_list->content);
				free(new_list);
				new_list = current;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
