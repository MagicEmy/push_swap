NAME	:=	push_swap
INC		:=	-I includes
HEADERS	:=	includes/push_swap.h
SRC		:=	push_swap.c \
			input.c	\
			sorting_small.c \
			list.c \
			actions.c \
			utils.c \
			index.c \
			radix.c

OBJ		:= $(SRC:%.c=obj/%.o)
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror # -g -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INC)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(INC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
