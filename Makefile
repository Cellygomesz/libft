# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/09/27 16:29:00 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar_fd.c ft_isdigit.c ft_strdup.c ft_strncmp.c \
	  ft_tolower.c ft_isprint.c ft_strlen.c ft_putstr_fd.c \
	  ft_putnbr_fd.c ft_strlcpy.c ft_bzero.c ft_putendl_fd.c \
	  ft_memcpy.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
	  ft_toupper.c ft_memset.c ft_atoi.c ft_strlcat.c 

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

PINK = \033[1;35m

GREEN = \033[0;32m

RESET = \033[0m

KITTY = " ➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n\
➖🟦➖➖🟦➖🟩🟩🟩🟩➖🟪➖➖➖🟧➖➖➖➖🟥🟥➖➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦🟦🟦🟦➖🟩🟩🟩➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩🟩🟩🟩➖🟪🟪🟪➖🟧🟧🟧➖➖🟥🟥➖➖\n\
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n\n\
          \t\t$(PINK)Welcome to Libft 💗\n$(RESET)"\

all: $(NAME)

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ)
	@ echo $(KITTY)
	@ echo "$(GREEN)---<3--- Successful compilation ✅ ---<3---$(RESET)"

clean:
	@ rm -fr $(OBJ)
	@ echo "$(GREEN)---<3--- Deleted object files ✅ ---<3---$(RESET)"

fclean: clean
	@ rm -f $(NAME)

re: fclean run
