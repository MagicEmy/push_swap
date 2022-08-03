NAME	:=	push_swap
INC		:=	-I includes
HEADERS	:=	includes/push_swap.h
SRC		:=	push_swap.c \
			input.c	\
			sorted.c \
			sorting_small.c \
			list.c \
			actions.c

OBJ		:= $(SRC:%.c=obj/%.o)
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) -o $(NAME) $(OBJ) $(INC)

obj/%.o: src/%.c
	mkdir -p obj
	$(CC) $(INC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
