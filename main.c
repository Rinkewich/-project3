#include "ft_printf.h"
int	main(void)
{

	//a = 4294967295;
//	printf("printf: %u\n", a);
	int a, *b;
	a = 1;
//	char ch = 0xc0;
	b = 0x123123;
	//size_t g = b;
	//printf("\n Значение переменной a равно%d = %x шестн.", a, a);
	// printf("printf: %x\n", b);
	// printf("printf: %x\n", g % 16);
	// g /= 16;	
	// printf("printf: %x\n", g % 16);
	printf("printf: %p\n", b);
	printf("printf: %x", b);
	return (0);
}

//