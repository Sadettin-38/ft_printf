SRC	=	ft_printf.c ft_print_char.c ft_print_str.c ft_print_ptr.c \
		ft_print_uint.c ft_print_nbr.c ft_print_hex.c

OBJ	=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
RM		=	rm -rf
AR		=	ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
