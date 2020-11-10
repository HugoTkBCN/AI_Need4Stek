##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o
##

SRC	=	utils/my_putchar.c	\
		utils/my_putstr.c	\
		utils/my_put_nbr.c	\
		utils/my_strlen.c	\
		utils/my_strdup.c	\
		utils/my_strcpy.c	\
		utils/str_to_word_array.c	\
		utils/my_strncmp.c	\
		utils/my_tablen.c	\
		utils/free_array.c	\
		src/ai.c	\
		src/movement.c	\
		src/main.c

NAME	=	ai

OBJ	=	$(SRC:.c=.o)

FLAGS =	-Wall -Werror -g3

LIB =

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) -I./include $(SRC) $(LIB) $(FLAGS)

clean:
	rm -rf $(OBJ)
fclean:		clean
	rm -rf $(NAME)

re:	fclean all
