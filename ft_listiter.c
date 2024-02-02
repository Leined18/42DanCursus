/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:45:45 by danpalac          #+#    #+#             */
/*   Updated: 2024/02/02 16:59:47 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int	i;

	if (!lst)
		return ;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		f(lst[i]);
		i++;
	}
}

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main() {
    t_list *lst;
    char *strings[] = {"uno", "dos", "tres", "cuatro"};
    int i;

    // Crear la lista
    lst = NULL;
    for (i = 0; i < sizeof(strings) / sizeof(*strings); i++) {
        ft_lstadd_back(&lst, ft_lstnew((void *)strings[i]));
    }

    // Recorrer la lista e imprimir cada elemento
    ft_lstiter(lst, print_data);

    // Limpiar la lista
    ft_lstclear(&lst, free);

    return 0;
}
