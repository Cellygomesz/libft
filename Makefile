# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/09/18 10:49:33 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c \

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJ)
	@ echo "---<3--- Successful compilation ---<3---"

clean:
	rm -fr $(OBJ)
	@ echo "---<3--- Deleted object files ---<3---"

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
