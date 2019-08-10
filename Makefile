# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/07 15:20:38 by mbutt             #+#    #+#              #
#    Updated: 2019/08/09 18:36:04 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = *.c
MINI_LIBFT = mini_libft/*.c
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(MINI_LIBFT)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
