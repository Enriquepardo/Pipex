NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_printf.c \
 		ft_putchar.c \
		ft_putstr.c \
		ft_putunbr.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_puthex.c

OBJS = $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

clean:
	@rm -rf $(OBJS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) and object files cleaned."

re: fclean all

test: $(NAME)
	$(CC) -Wall -Wextra -Werror main.c $(NAME) -o test_program
	./test_program

all: $(NAME)

.PHONY: all clean fclean re test