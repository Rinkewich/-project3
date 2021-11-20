#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
int		ft_printf(const char *str, ...);
int		ft_num_p(const char *str, va_list el);
int		ft_putnbr(int number, int i);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr2(unsigned int n);
size_t	ft_strlen( const char *str);
int		ft_put_point(size_t n);
int		ft_puthex_low(unsigned int n);
int		ft_puthex_under(unsigned int n);
#endif