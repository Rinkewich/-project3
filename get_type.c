#include "ft_printf.h"

static void get_type(char c, va_list el)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(el, int));
	else if (c == 'c')
		ft_putchar(va_arg(el, int));
	else if (c == 'u')
		ft_putnbr2(va_arg(el, unsigned int));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 's' )
		ft_putstr(va_arg(el, char *));
	else if (c == 'p')
	 	ft_puthex(va_arg(el, size_t));
}

int ft_num_p(const char *str, va_list el)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			write (1, str + i, 1);
		if (str[i] == '%')
		{
			get_type(str[i + 1], el);
			i++;
		}
		i++;
	}
	return (0);
}
