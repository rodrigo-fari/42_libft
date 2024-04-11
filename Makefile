# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 19:58:56 by rde-fari          #+#    #+#              #
#    Updated: 2024/04/11 20:39:13 by rde-fari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= cc
FLAGS= -Wall -Wextra -Werror
OBJ= $(SRC:.c=.o)
SRC= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME): $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
