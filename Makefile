##
## EPITECH PROJECT, 2019
## EvalExpr
## File description:
## Makefile Projet
##

NAME    =	101pong_

SRC     =	101pong.c

RM      =       rm -f

LIB	= 	-L lib/my/ -lmy

INC	=	-I include

all:    $(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(LIB) $(INC)

clean:
	make -C lib/my clean
	$(RM) *.o
	$(RM) *~

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re: 	fclean all
