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

int	format(va_list args, char *str)
{
	int		result;
	void	*p;

	result = 0;
	if (*str == 'd')
		result += ft_putnbr(va_arg(args, int));
	else if (*str == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (*str == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			result += ft_putaddress(p);
		else
			result += ft_putstr("0x0");
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr("cdspxX%", str[i + 1]))
		{
			length += format(args, (char *)&str[++i]);
			i++;
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
/*
int main(void)
{
    int value = 42;
    char *text = "Hello, World!";

    int printed_chars = ft_printf("Value: %d, Text: %s\n", value, text);
    ft_printf("Characters printed: %d\n", printed_chars);

    return (0);
}*/
