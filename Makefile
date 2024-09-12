# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/09/12 12:32:10 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# trocar depois os *.c e *.o !!!!!
# tirar o Wildcard !!!!!

NAME = libft

SRC = *.c

OBJ = $(SRC: .c = .o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ $(cc) -o $(NAME)

%.o: %.c %.h
	@ $(CC)-o $(NAME) $(CC_FLAGS)

clean:
	@ rm -fr *.o

fclean: clean
	@ rm -f $(NAME)

re: fclean $(NAME)

