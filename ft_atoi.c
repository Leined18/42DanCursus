/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:16:23 by danpalac          #+#    #+#             */
/*   Updated: 2024/02/08 11:37:33 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (8192);
	return (0);
}

static int	check_digit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(char const *str)
{
	long long int	result;
	long long int	check;
	int				sign;

	result = 0;
	sign = 1;
	while (*str && check_space(*str))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && check_digit(*str))
	{
		check = result;
		result = result * 10 + sign * (*str - 48);
		if (result > check && sign < 0)
			return (0);
		if (result < check && sign > 0)
			return (-1);
		str++;
	}
	return (result);
}
/*
int	main(void)
{
	char	str1[20];
	printf("introduce a string\n");
	scanf("%s", str1);
 	int i1 = atoi(str1);
 	int i2 = ft_atoi(str1);

 	if (i1 == i2)
 		printf("TEST_SUCCESS\n%d",i1);
	else
 		printf("TEST_FAILED\n%d", i2);
}*/
