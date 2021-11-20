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

int	ft_puthex_under(unsigned int n)
{
	int		i;
	char	*end;
	int		count;

	i = ft_len_point(n);
	end = (char *)malloc(sizeof(char) * (i + 1));
	end[i] = '\0';
	// if (n == 0)
	// 	ft_putchar('0');
	while (i)
	{
		i--;
		if (n % 16 >= 10 && n % 16 <= 15)
			end[i] = 'A' + n % 16 - 10;
		if (n % 16 < 10)
			end[i] = '0' + n % 16;
		n /= 16;
	}
	count = ft_putstr(end);
	free(end);
	return (count);
}
