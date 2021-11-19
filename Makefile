NAME	=	ft_printf.a.a

SRCS	=	ft_printf.c 	get_type.c\


HEADER	=	ft_printf.h

OBJ	=	$(patsubst %.c, %.o, $(SRCS))
OBJ_B	=	$(SRCS_B:%.c=%.o)

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

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