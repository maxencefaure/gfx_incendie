##
## Makefile for  in /home/faure_k/b1/infographie/gfx_incendie
## 
## Made by maxence faure
## Login   <faure_k@epitech.net>
## 
## Started on  Wed Apr  6 09:59:19 2016 maxence faure
## Last update Wed Apr  6 09:59:21 2016 maxence faure
##

NAME	= fireball

SRC	= main.c \
	  tekgetpixel.c \
	  palette.c \
	  fill_last_lines.c \
	  average.c \
	  fill_buffer.c \
	  my_convert.c

OBJ	= $(SRC:.c=.o)

CC	= gcc

CFLAGS	+= -W -Wall -Werror -ansi -pedantic
CFLAGS	+= -I./include
CFLAGS	+= -L/home/${USER}/.froot/lib/ -llapin -lsfml-audio
CFLAGS	+= -lsfml-graphics -lsfml-window -lsfml-system -lstdc++ -ldl -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -g -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
