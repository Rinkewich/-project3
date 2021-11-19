#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
int		ft_printf(const char *str, ...);
int		ft_num_p(const char *str, va_list el);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr2(unsigned int n);
void    ft_puthex(size_t *p);
#endif