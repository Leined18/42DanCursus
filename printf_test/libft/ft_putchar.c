/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:20:13 by danpalac          #+#    #+#             */
/*   Updated: 2024/03/07 10:20:33 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_putchar('g'));
	return 0;
}*/
