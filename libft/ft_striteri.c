/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:01:58 by danpalac          #+#    #+#             */
/*   Updated: 2024/02/08 14:27:37 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ESTOS SON EJEMPLOS DE FUNCIONES QUE SE PUEDEN USAR EN ft_STRITERI
void ft_tolower(unsigned int index, char *c) {
    if (*c >= 'A' && *c <= 'Z') {
        *c += 32;
    }
}
void    noalpha_space(unsigned int index, char *c)
{
    if (!(*c >= 'a' && *c <= 'z')){
        *c = ' ';
    }
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main() {
    char s[] = "HeLlo..""MIAU""..WorLDDD";
    ft_striteri(s, ft_tolower);
    ft_striteri(s, noalpha_space);
    printf("%s\n", s);

    return 0;
}*/
