NAME = push_swap
LIB = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c operations.c algorithm.c errors.c rever_rotate.c \
		rotate.c utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

$(LIB):
	make -C libft
	cp libft/libft.a .

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME) $(LIB)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
