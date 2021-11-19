#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
int		ft_printf(const char *str, ...);
int		ft_num_p(const char *str, va_list el);
int		ft_putnbr(int number);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr2(unsigned int n);
size_t	ft_strlen( const char *str);
//void    ft_puthex(size_t *p);
#endif