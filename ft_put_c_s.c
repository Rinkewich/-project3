/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_c_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:20 by fardath           #+#    #+#             */
/*   Updated: 2021/11/25 20:36:21 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{	
	return (write (1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	answer;

	answer = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		write (1, s, 1);
		s++;
		answer++;
	}
	return (answer);
}
