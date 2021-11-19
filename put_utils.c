#include "ft_printf.h"

void	ft_putnbr(int n)
{
	long long	number;
	char		res;

	number = n;
	if (number < 0)
	{
		write (1, "-", 1);
		number = number * (-1);
	}
	if (number <= 9)
	{
		res = number + '0';
		write(1, &res, 1);
	}
	else
	{
		ft_putnbr((number / 10));
		res = number % 10 + '0';
		write(1, &res, 1);
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (s)
	{
		while (*s)
		{
			write (1, s, 1);
			s++;
		}
	}
}

void	ft_putnbr2(unsigned int n)
{
	long long	number;
	char		res;

	number = n;
	if (number <= 9)
	{
		res = number + '0';
		write(1, &res, 1);
	}
	else
	{
		ft_putnbr((number / 10));
		res = number % 10 + '0';
		write(1, &res, 1);
	}
}

void ft_puthex(size_t p)
{
	
}