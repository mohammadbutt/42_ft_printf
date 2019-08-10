# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/07 15:20:38 by mbutt             #+#    #+#              #
#    Updated: 2019/08/09 18:55:06 by mbutt            ###   ########.fr        #
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
	@echo "\033[1;36mCompiling Makefile...\033[0m"
	$(CC) $(CFLAGS) $(SRC) $(MINI_LIBFT)
	ar rc $(NAME) $(OBJ)
	@echo "\033[1;32mGenerated libftprintf.a static library succesfully.\033[0m"

clean:
	rm -rf $(OBJ)
	@echo "\033[1;33mRemoved Object files\033[0m"

fclean:
	rm -rf $(NAME)
	@echo "\033[1;33mRemoved Static library\033[0m"

re: fclean all
.PHONY: all clean fclean re
