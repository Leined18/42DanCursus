/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:56:53 by danpalac          #+#    #+#             */
/*   Updated: 2024/01/19 11:24:50 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total_len;
	char	*ptr;

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	ptr = (char *)malloc((total_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
/*
int main()
{
    const char *cadena1 = "Hola, ";
    const char *cadena2 = "mundo!";

    char *resultado = ft_strjoin(cadena1, cadena2);

    printf("Cadena resultante: %s\n", resultado);

    // Libera la memoria asignada para la cadena resultante
    free(resultado);

    return 0;
}*/
