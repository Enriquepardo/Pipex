NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I../inc

SRCS = \
	src/ft_alloc/ft_bzero.c \
	src/ft_alloc/ft_calloc.c \
	src/ft_alloc/ft_split.c \
	src/ft_alloc/ft_substr.c \
	src/ft_char/ft_isalnum.c \
	src/ft_char/ft_isalpha.c \
	src/ft_char/ft_isascii.c \
	src/ft_char/ft_isdigit.c \
	src/ft_char/ft_isprint.c \
	src/ft_conv/ft_atoi.c \
	src/ft_conv/ft_itoa.c \
	src/ft_conv/ft_tolower.c \
	src/ft_conv/ft_toupper.c \
	src/ft_lst/ft_lstadd_back.c \
	src/ft_lst/ft_lstadd_front.c \
	src/ft_lst/ft_lstclear.c \
	src/ft_lst/ft_lstdelone.c \
	src/ft_lst/ft_lstiter.c \
	src/ft_lst/ft_lstlast.c \
	src/ft_lst/ft_lstmap.c \
	src/ft_lst/ft_lstnew.c \
	src/ft_lst/ft_lstsize.c \
	src/ft_mem/ft_memchr.c \
	src/ft_mem/ft_memcmp.c \
	src/ft_mem/ft_memcpy.c \
	src/ft_mem/ft_memmove.c \
	src/ft_mem/ft_memset.c \
	src/ft_put/ft_putchar_fd.c \
	src/ft_put/ft_putendl_fd.c \
	src/ft_put/ft_putnbr_fd.c \
	src/ft_put/ft_putstr_fd.c \
	src/ft_str/ft_strchr.c \
	src/ft_str/ft_strdup.c \
	src/ft_str/ft_striteri.c \
	src/ft_str/ft_strjoin.c \
	src/ft_str/ft_strlcat.c \
	src/ft_str/ft_strlcpy.c \
	src/ft_str/ft_strlen.c \
	src/ft_str/ft_strmapi.c \
	src/ft_str/ft_strncmp.c \
	src/ft_str/ft_strnstr.c \
	src/ft_str/ft_strrchr.c \
	src/ft_str/ft_strtrim.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) and object files cleaned."

re: fclean all

.PHONY: all bonus clean fclean re