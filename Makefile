# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 11:01:24 by yhajbi            #+#    #+#              #
#    Updated: 2024/11/21 05:16:34 by yhajbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

HED1 = ft_printf.h
SRC1 = ft_countd.c ft_handle_specifier.c ft_printf.c ft_printhex.c ft_printmemory.c \
	   ft_putchari.c ft_putstri.c ft_putnbri.c ft_putunbri.c ft_strleni.c ft_switch.c
OBJ1 = $(SRC:.c=.o)


OBJ = $(OBJ1)
SRC = $(SRC1)

BIN = program

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c $(HED1)
	$(CC) $(FLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJ) $(BIN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
