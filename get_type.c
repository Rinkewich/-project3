#include "ft_printf.h"

static int	get_type(char c, va_list el, int answer)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(el, int));
	else if (c == 'c')
		answer += ft_putchar(va_arg(el, int));
	else if (c == 'u')
		answer += ft_putnbr2(va_arg(el, unsigned int));
	 else if (c == '%')
		answer += ft_putchar('%');
	else if (c == 's' )
		answer += ft_putstr(va_arg(el, char *));
	else if (c == 'p')
		answer += ft_puthex(va_arg(el, size_t *));
	return (answer);
}

int ft_num_p(const char *str, va_list el)
{
	int	i;
	int answer;

	if (!str)
		return (0);
	i = 0;
	answer = 0;
	while (str[i])
	{
		if (str[i] != '%')
			write (1, str + i, 1);
		if (str[i] == '%')
		{
			get_type(str[i + 1], el, answer);
			i++;
		}
		i++;
	}
	return (answer);
}
