# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apergens <apergens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 08:56:14 by apergens          #+#    #+#              #
#    Updated: 2014/01/12 16:46:24 by apergens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc

NAME	= ft_select

LNAME	= ft ftprintf ftmatch

DIR		= $(patsubst %,lib%,$(LNAME))

HDR		= $(patsubst %,%/%.a,$(DIR))

SRC		= ft_select.c ft_getch.c ft_st_getkey.c ft_st_signal.c ft_st_cmdstr.c \
		ft_st_init.c ft_st_putmenu.c ft_str_center.c ft_st_choice.c \
		ft_st_putchoice.c ft_st_delmenu.c ft_st_cmdput.c ft_st_cmdgoto.c \
		ft_st_columns.c ft_st_termsize.c ft_st_sound.c ft_st_clear.c \
		ft_st_putstr.c ft_st_putcirc.c ft_st_check.c ft_st_color.c \
		ft_st_caption.c ft_st_decal.c ft_st_search.c

OBJ		= $(patsubst %.c,srcs/%.o,$(SRC))

LFLAGS	= $(patsubst %,-L%,$(DIR)) $(patsubst %,-l%,$(LNAME))

CFLAGS	= -Wall -Wextra -Werror -pedantic -I./includes -O3

all: lib $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LFLAGS) -o $(NAME) $(OBJ) -ltermcap

lib:
	$(foreach var,$(DIR),make -C $(var);)

libclean:
	$(foreach var,$(DIR),make -C $(var) clean;)

binclean:
	rm -f $(OBJ)

clean: libclean binclean

libfclean: libclean
	$(foreach var,$(DIR),make -C $(var) fclean;)

binfclean: binclean
	rm -f $(NAME)

fclean: libfclean binfclean

binre: binfclean $(NAME)

re: fclean all

.PHONY: all libclean binclean clean libfclean binfclean fclean binre re lib
