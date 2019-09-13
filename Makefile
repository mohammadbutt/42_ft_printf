# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/07 15:20:38 by mbutt             #+#    #+#              #
#    Updated: 2019/09/12 21:49:30 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CYAN:=\033[1;36m
YELLOW:=\033[1;33m
GREEN:=\033[1;32m
NC:=\033[0m

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

#SRC = $(filter-out main.c, $(wildcard *.c)) // Changing path to srcs
#MINI_LIBFT = mini_libft/*.c				 // Changing path to srcs

SRC = $(filter-out srcs/main.c, $(wildcard srcs/*.c))
MINI_LIBFT = srcs/mini_libft/*.c
OBJ = *.o

all: $(NAME)

$(NAME):
	@echo "${CYAN}Compiling Makefile.${NC}"
	$(CC) $(CFLAGS) $(SRC) $(MINI_LIBFT)
	ar rc $(NAME) $(OBJ)
	@echo "${GREEN}Generated libftprintf.a static library succesfully.${NC}"

clean:
	rm -rf $(OBJ)
	@echo "${YELLOW}Removed object files.${NC}"

fclean:
	rm -rf $(NAME)
	@echo "${YELLOW}Removed static library.${NC}"

re: fclean all
.PHONY: all clean fclean re
