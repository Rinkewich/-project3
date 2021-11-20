#include "ft_printf.h"

int	ft_putnbr(int number, int i)
{
	char		res;
	int			n;

	n = number;
	if (number < 0)
	{
		i += write (1, "-", 1);
		number = number * (-1);
	}
	if (number <= 9)
	{
		res = number + '0';
		i += write(1, &res, 1);
	}
	else
	{	
		i += ft_putnbr(number / 10, i);
		res = number % 10 + '0';
		if (n <= 0)
			write(1, &res, 1);
		else
			i += write(1, &res, 1);
	}
	return (i);
}

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
		ft_putnbr2((number / 10));
		res = number % 10 + '0';
		write(1, &res, 1);
		i++;
	}
	return (i);
}
// int	ft_putnbr(int number, int i)
// {
// 	char		res;

// 	if (number < 0)
// 	{
// 		i += write (1, "-", 1);
// 		number = number * (-1);
// 	}
// 	if (number <= 9)
// 	{
// 		res = number + '0';
// 		i += write(1, &res, 1);
// 	}
// 	else
// 	{	
// 		i += ft_putnbr(number / 10, i);
// 		res = number % 10 + '0';
// 		write(1, &res, 1);
// 	}
// 	return (i);
// }