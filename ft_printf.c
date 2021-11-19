#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	el;

	va_start(el, str);
	ft_num_p(str, el);
	va_end(el);
	return (0);
}
