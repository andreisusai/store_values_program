NAME	= my_crd
CC	= gcc
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -Werror
CFLAGS	+= -std=c11 -g3

SRC	= main.c
OBJ	=	$(SRC:%.c=%.o)
$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
all:	$(NAME)
clean:
		rm $(OBJ)
