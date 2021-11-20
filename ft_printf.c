#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	el;
	int		answer;

	va_start(el, str);
	answer = ft_num_p(str, el);
	va_end(el);
	return (answer);
}
