NAME	=	libftprintf.a

SRCS	=	ft_printf.c\
			get_type.c\
			ft_put_point.c\
			ft_puthex_low.c\
			ft_puthex_under.c\
			ft_put_c_s.c\
			ft_putnbr.c\
			ft_put_unsigned.c


HEADER	=	ft_printf.h

OBJ	=	$(patsubst %.c, %.o, $(SRCS))
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re bonus

all	:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o	:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re	:	fclean all