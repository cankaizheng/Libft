# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cazheng <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 23:12:27 by cazheng           #+#    #+#              #
#    Updated: 2018/07/10 17:57:53 by cazheng          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCS = *.c 

OBJ = *.o

all: $(NAME)

$(NAME): 
	$(CC)  $(FLAGS) $(SRCS)
	$(AR)  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
