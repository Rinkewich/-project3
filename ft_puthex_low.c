/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:37 by fardath           #+#    #+#             */
/*   Updated: 2021/11/25 21:34:16 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_point(unsigned int n)
{
	int	answer;

	answer = 1;
	while (n > 15)
	{
		n /= 16;
		answer++;
	}
	return (answer);
}

int	ft_puthex_low(unsigned int n)
{
	int		i;
	char	*end;
	int		count;

	i = ft_len_point(n);
	end = (char *)malloc(sizeof(char) * (i + 1));
	if (!end)
		return (0);
	end[i] = '\0';
	while (i)
	{
		i--;
		if (n % 16 >= 10)
			end[i] = 'a' + n % 16 - 10;
		else
			end[i] = '0' + n % 16;
		n /= 16;
	}
	count = ft_putstr(end);
	free(end);
	return (count);
}
