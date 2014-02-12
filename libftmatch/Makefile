# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apergens <apergens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/17 13:48:08 by apergens          #+#    #+#              #
#    Updated: 2014/01/12 01:52:27 by apergens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

LIBNAME	= ftmatch

NAME	= lib$(LIBNAME).a

SRC		= ft_match.c ft_nmatch.c

OBJ		= $(patsubst %.c,srcs/%.o,$(SRC))

HEADER	= ../includes

CFLAGS	= -Wall -Wextra -Werror -I$(HEADER) -O3

all: $(NAME)

$(NAME): $(LOBJ) $(OBJ)
	ar rc $(NAME) $(LOBJ) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(LOBJ) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
