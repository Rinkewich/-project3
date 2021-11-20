#include "ft_printf.h"

static int	get_type(char c, va_list el)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(el, int), i));
	else if (c == 'c')
		return (ft_putchar(va_arg(el, int)));
	else if (c == 'u')
		return (ft_putnbr2(va_arg(el, unsigned int)));
	 else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 's' )
		return (ft_putstr(va_arg(el, char *)));
	else if (c == 'p')
		return (ft_put_point(va_arg(el, unsigned long)));
	else if (c == 'x')
		return (ft_puthex_low(va_arg(el, unsigned long)));
	else if (c == 'X')
		return (ft_puthex_under(va_arg(el, unsigned long)));
	return (0);
}

int	ft_num_p(const char *str, va_list el)
{
	int	i;
	int	answer;

	if (!str)
		return (0);
	i = 0;
	answer = 0;
	while (str[i])
	{
		if (str[i] != '%')
			answer += write (1, str + i, 1);
		if (str[i] == '%')
		{
			answer += get_type(str[i + 1], el);
			i++;
		}
		i++;
	}
	return (answer);
}
