# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 11:01:24 by yhajbi            #+#    #+#              #
#    Updated: 2024/11/19 03:04:56 by yhajbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -I./libft/ -I.
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

HED1 = ft_printf.h
SRC1 = $(shell ls *.c)
OBJ1 = $(SRC:.c=.o)

HED2 = ./libft/libft.h
# SRC2 = $(filter %.c, ./libft/)
SRC2 = $(shell ls ./libft/*.c)
OBJ2 = $(SRC2:.c=.o)

OBJ = $(OBJ1) $(OBJ2)
SRC = $(SRC1) $(SRC2)

BIN = program

all: $(NAME)

bonus: all

$(NAME): $(OBJ)

bin: $(BIN)

rebin: fclean bin

$(BIN): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

%.o: %.c $(HED1) $(HED2)
	$(CC) $(FLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJ) $(BIN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
