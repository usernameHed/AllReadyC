##
## Makefile for  in /home/belfio_u/rendu/all_ready
## 
## Made by ugo belfiore
## Login   <belfio_u@epitech.net>
## 
## Started on  Wed Jan  6 09:55:46 2016 ugo belfiore
## Last update Wed Jan  6 10:14:46 2016 ugo belfiore
##

SRC     =       ./src/main.c			\
		./src/exo.c			\

OBJ     =       $(SRC:.c=.o)

NAME    =       bin

CC      =       clang

CFLAGS  +=      -W -Wall -Wextra
CFLAGS  +=      -I ./include

LDFLAGS	=	-L/usr/lib64/X11 -lXext -lX11 -lm

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re: fclean all
