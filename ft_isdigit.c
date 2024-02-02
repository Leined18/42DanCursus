/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft:isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:30:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/01/18 13:40:48 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
int main()
{
	int c;
   	scanf("%d", &c);
	int a;
   	scanf("%d", &a);

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(a));

	return (0);
}*/
