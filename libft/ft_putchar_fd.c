/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:02:23 by danpalac          #+#    #+#             */
/*   Updated: 2024/01/25 09:43:29 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main() {
    // Write C code here
    char c = 'a';
    int i = 0;

    while (i < sizeof(int) * sizeof(int))
    {
        ft_putchar_fd(c,1);
        i++;
    }

    return 0;
}*/
