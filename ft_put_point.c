/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:26 by fardath           #+#    #+#             */
/*   Updated: 2021/11/25 21:34:05 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen( const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

static int	ft_len_point(size_t n)
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

int	ft_put_point(size_t n)
{
	int		i;
	char	*end;
	int		count;

	i = ft_len_point(n);
	end = (char *)malloc(sizeof(char) * (i + 3));
	if (!end)
		return (0);
	end[0] = '0';
	end[1] = 'x';
	end[i + 2] = '\0';
	while (i)
	{
		i--;
		if (n % 16 >= 10)
			end[i + 2] = 'a' + n % 16 - 10;
		else
			end[i + 2] = '0' + n % 16;
		n /= 16;
	}
	count = ft_putstr(end);
	free(end);
	return (count);
}
