# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/09/18 09:12:28 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# trocar depois os *.c e *.o !!!!!
# tirar o Wildcard !!!!!

NAME = libft

SRC = *.c

OBJ = $(SRC: .c = .o)

HEADER = libft.h

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ)
	@ $(CC) $(CC_FLAGS) -o $(NAME) $(OBJ) $(HEADER)
	echo "Successful compilation"

$(OBJ): $(SRC)
	@ $(CC) $(CC_FLAGS) -c $(SRC)

clean:
	@ rm -fr *.o

fclean: clean
	@ rm -f $(NAME)

re: fclean $(NAME)

