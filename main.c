#include "ft_printf.h"
#include <limits.h>
int	main(void)
{
	int	a;

	a = ft_printf("%d ", INT_MIN);
	printf("%d\n", a);
	a = printf("%d ", INT_MIN);
	printf("%d\n", a);
	return (0);
}

//