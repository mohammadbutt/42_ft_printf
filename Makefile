# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbutt <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/07 15:20:38 by mbutt             #+#    #+#              #
#    Updated: 2019/08/22 21:41:24 by mbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CYAN:=\033[1;36m
YELLOW:=\033[1;33m
GREEN:=\033[1;32m
NC:=\033[0m

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c

//SRC = *.c
SRC = $(filter-out main.c, $(wildcard *.c))
MINI_LIBFT = mini_libft/*.c
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
