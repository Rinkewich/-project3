#include "ft_printf.h"

void ft_puthex(void *p)
{

}

size_t	ft_strlen( const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}