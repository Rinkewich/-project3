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
