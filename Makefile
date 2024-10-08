# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:48:16 by mgomes-s          #+#    #+#              #
#    Updated: 2024/10/08 12:23:11 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar_fd.c ft_isdigit.c ft_strdup.c ft_strncmp.c \
	  ft_tolower.c ft_isprint.c ft_strlen.c ft_putstr_fd.c \
	  ft_putnbr_fd.c ft_strlcpy.c ft_bzero.c ft_putendl_fd.c \
	  ft_memcpy.c ft_isalnum.c ft_isascii.c ft_isalpha.c \
	  ft_toupper.c ft_memset.c ft_atoi.c ft_strlcat.c ft_memchr.c \
	  ft_memcmp.c ft_memmove.c ft_strchr.c ft_strnstr.c ft_strrchr.c \
	  ft_calloc.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_split.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

BONUS_OBJ = $(BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

PINK = \033[1;35m

GREEN = \033[0;32m

GRAY = \033[1;30m

RESET = \033[0m

KITTY = "                                       \n\
                                                \n\
                                                \n\
                                                \n\
                                                \n\
                                                \n\
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n\
➖🟦➖➖🟦➖🟩🟩🟩🟩➖🟪➖➖➖🟧➖➖➖➖🟥🟥➖➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦🟦🟦🟦➖🟩🟩🟩➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩➖➖➖➖🟪➖➖➖🟧➖➖➖🟥➖➖🟥➖\n\
➖🟦➖➖🟦➖🟩🟩🟩🟩➖🟪🟪🟪➖🟧🟧🟧➖➖🟥🟥➖➖\n\
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖\n\n\
          \t\t$(PINK)Welcome to Libft 💗\n\n\n\n$(RESET)"\

TRASH = "$(GRAY)     \n\
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n\
⠀⠀   ⢰⡟⠛⠛⠛⠛⢻⡆⠀⠀⠀  ⠀⠀⠀\n\
⠀⣤⣤⣤⣤⣼⣧⣤⣤⣤⣤⣼⣧⣤⣤⣤⣤⠀⠀  \n\
⠀⠛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⣛⠛⠀⠀  \n\
⠀⠀⢻⣿⣿⢹⣿⣿⡏⢹⣿⣿⡏⣿⣿⡟⠀⠀⠀  \n\
⠀⠀⢸⣿⣿⠘⣿⣿⡇⢸⣿⣿⠃⣿⣿⡇⠀⠀⠀  \n\
⠀⠀⠸⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⣿⣿⠇⠀    \n\
⠀⠀⠀⣿⣿⠀⣿⣿⡇⢸⣿⣿⠀⣿⣿⠀⠀    \n\
⠀⠀⠀⣿⣿⠀⢿⣿⡇⢸⣿⡿⠀⣿⣿⠀⠀⠀   \n\
⠀⠀⠀⢸⣿⡆⢸⣿⡇⢸⣿⡇⢰⣿⡇⠀⠀⠀   \n\
⠀⠀⠀⢸⣿⡇⢸⣿⡇⢸⣿⡇⢸⣿⡇⠀     \n\
⠀⠀⠀⠈⣿⣷⣾⣿⣷⣾⣿⣷⣾⣿⠁⠀⠀⠀⠀  \n\
⠀⠀⠀⠀⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀  \n$(RESET)"\

all: $(NAME)

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ)
	@ echo $(KITTY)
	@ echo "$(GREEN)---<3--- Successful compilation ✅ ---<3---$(RESET)"

bonus: $(OBJ) $(BONUS_OBJ)
	@ ar rcs $(NAME) $(BONUS_OBJ)
	@ echo "$(GREEN)---<3--- Bonus files added ✅ ---<3---$(RESET)"

clean:
	@ rm -fr $(OBJ)
	@ echo $(TRASH)
	@ echo "$(GREEN)---<3--- Deleted object files ✅ ---<3---$(RESET)"

fclean: clean
	@ rm -f $(NAME)

re: fclean run

.PHONY: all clean fclean re bonus
