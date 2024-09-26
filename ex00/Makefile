# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 12:10:59 by pcervill          #+#    #+#              #
#    Updated: 2024/09/26 13:49:40 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Fixed

SRC		= main.cpp Fixed.cpp

SRC_DIR	= ./src/

OBJ		= $(addprefix $(SRC_DIR), $(SRC:.cpp=.o))

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -g3

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo " \033[32m[ OK ] | $(NAME) ready! ✅\033[0m"

$(NAME): $(OBJ)
	@echo " \033[33m[ .. ] | Compiling $(NAME)... \033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo " \033[35m[ OK ] | $(NAME) fclean ready! 🧹\033[0m"

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ)