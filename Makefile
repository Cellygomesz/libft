# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/09/18 10:35:55 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c \

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ)
	echo "Successful compilation"

clean:
	 rm -fr $(OBJ)

fclean: clean
	 rm -f $(NAME)
	echo "arquivos obj excluidos"

re: fclean $(NAME)

