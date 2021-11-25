/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:33 by fardath           #+#    #+#             */
/*   Updated: 2021/11/25 21:45:21 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_n(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		n = n * (-1);
		size++;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa(unsigned int n)
{
	char	*result;
	int		i;
	long	number;

	number = n;
	i = size_n(number);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (number == 0)
		result[0] = '0';
	if (number < 0)
	{
		result[0] = '-';
		number = number * (-1);
	}
	while (number > 0)
	{
		i--;
		result[i] = (number % 10) + '0';
		number = number / 10;
	}
	return (result);
}

int	ft_putnbr2(unsigned int number)
{
	char	*res;
	int		i;

	res = ft_itoa(number);
	if (!res)
		return (0);
	i = ft_strlen(res);
	ft_putstr(res);
	free(res);
	return (i);
}
