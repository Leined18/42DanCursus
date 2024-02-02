/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:20:23 by danpalac          #+#    #+#             */
/*   Updated: 2024/01/08 14:35:41 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	else
		return (0);
}
/*
int main()
{
	char c;
   	scanf("%c ", &c);
	char a;
   	scanf("%c", &a);

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(a));

	return (0);
}*/
