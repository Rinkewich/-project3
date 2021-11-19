#include "ft_printf.h"

int	ft_putnbr(int number)
{
	char		res;
	int			i;

	i = 0;
	if (number < 0)
	{
		write (1, "-", 1);
		number = number * (-1);
		i++;
	}
	if (number <= 9)
	{
		res = number + '0';
		write(1, &res, 1);
		i++;
	}
	else
	{
		ft_putnbr((number / 10));
		res = number % 10 + '0';
		write(1, &res, 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (s)
	{
		while (*s)
		{
			write (1, s, 1);
			s++;
		}
	}
	return (ft_strlen(s));
}

int	ft_putnbr2(unsigned int n)
{
	long long	number;
	char		res;
	int			i;

	number = n;
	i = 0;
	if (number <= 9)
	{
		res = number + '0';
		write(1, &res, 1);
		i++;
	}
	else
	{
		ft_putnbr((number / 10));
		res = number % 10 + '0';
		write(1, &res, 1);
		i++;
	}
	return (i);
}
