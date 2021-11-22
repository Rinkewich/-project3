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

static char	*ft_itoa(int n)
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

int	ft_putnbr(int number)
{
	char	*res;
    int		i;

	res = ft_itoa(number);
	i = ft_strlen(res);
	ft_putstr(res);
	free(res);
	return (i);
}