NAME		= pipex

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Iincludes -Ilibft

SRC_DIR		= src
INC_DIR		= inc
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC = \
	$(SRC_DIR)/pipex.c \
	$(SRC_DIR)/utils.c


OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

bonus: $(LIBFT) $(NAME_BONUS)

$(LIBFT):
	@echo "\033[36m--> compiling Libft...\033[0m"
	@make -C $(LIBFT_DIR)
	

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[32m✔ $(NAME) successfully compiled\033[0m"

$(NAME_BONUS): $(OBJ_BONUS)
	@$(CC) $(CFLAGS) $(OBJ_BONUS) $(LIBFT) -o $(NAME_BONUS)
	@echo "\033[32m✔ $(NAME) Bonus successfully compiled\033[0m"

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)
	@make -C $(LIBFT_DIR) clean
	

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS)
	@make -C $(LIBFT_DIR) fclean
	@echo "\n\033[31mDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

re: fclean all

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

party:
					@printf "\033c"
					@echo "\n\033[35m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[1;33m♪┗(・o･)┓♪"
					@sleep 1
					@printf "\033c"
					@echo "\n\033[36m♪┏(・o･)┛♪"
					@sleep 1
					@printf "\033c"
					@echo "\033[34m♪┗(・o･)┓♪\n"

.PHONY: all clean fclean re bonus re_bonus party 