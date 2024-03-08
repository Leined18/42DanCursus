/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:02:45 by danpalac          #+#    #+#             */
/*   Updated: 2024/03/07 12:11:59 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	void	*p;

	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_putaddress(p));
		return (ft_putstr("0x0"));
	}
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			length += ft_format(args, *(str + i + 1));
			i++;
		}
		else
			length += ft_putchar(*(str + i));
		i++;
	}
	va_end(args);
	return (length);
}

int main(void)
{

	ft_printf("total de caracteres :%d\n", ft_printf("Caraacter : %c\n", 'a') +
    ft_printf("Cadena : %s\n", "cadena") +
    ft_printf("Dirección : %p\n", (void *)0x123456) +
    ft_printf("Numero Decimal: %d\n", 123) +
    ft_printf("Número entero : %i\n", 123)+
    ft_printf("Número sin signo : %u\n", 123)+
    ft_printf("Numero exadecimal en minuscula : %x\n", 0xabc)+ // Usar números en hexadecimal.
    ft_printf("Número exadecimal en mayuscula : %X\n", 0xABC)); // Usar números en hexadecimal.

	ft_printf("\nMI FUNCION\n!!!!!!!!!!SEPARADOR¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡\nORIGINAL\n");

	printf("Printed Caracters :%d\n",printf("\nCaracter : %c\n", 'a')+
    printf("Cadena : %s\n", "cadena")+
    printf("Dirección : %p\n", (void *)0x123456)+
    printf("Numero Decimal : %d\n", 123)+
    printf("Número entero : %i\n", 123)+
    printf("Número sin signo : %u\n", 123)+
    printf("Numero exadecimal en minuscula : %x\n", 0xabc)+ // Usar números en hexadecimal.
    printf("Número exadecimal en mayuscula : %X\n", 0xABC)); // Usar números en hexadecimal.

    return (0);
}