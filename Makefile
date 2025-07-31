# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 10:50:33 by bdjoco            #+#    #+#              #
#    Updated: 2025/07/31 16:43:54 by bdjoco           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ./lib/ft_atoi.c \
	./lib/ft_atol.c \
	./lib/ft_isdigit.c \
	./lib/ft_lstadd_back.c \
	./lib/ft_lstadd_front.c \
	./lib/ft_lstclear.c \
	./lib/ft_lstdelone.c \
	./lib/ft_lstlast.c \
	./lib/ft_lstnew.c \
	./lib/ft_lstsize.c \
	./lib/ft_putnbr_fd.c \
	./lib/ft_putstr_fd.c \
	./lib/ft_split.c \
	./src/instructions/push.c \
	./src/instructions/rotate_rev.c \
	./src/instructions/rotate.c \
	./src/instructions/swap.c \
	./src/chunk.c \
	./src/chunk_utils.c \
	./src/args_func.c \
	./src/checker_bis.c \
	./src/checker.c \
	./src/error_msg.c \
	./src/sort_method.c \
	./src/sort_method_bis.c \
	./main.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -f

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I .

all : $(NAME)
	@echo "\e[1m\e[32mTout est compilé\e[0m ​👍​"

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	@$(RM) $(OBJ)
	@echo "\e[32mNettoyage des \e[0m\e[1mfichiers source\e[0m \e[32mterminé\e[0m 🧹"

fclean : clean
	@$(RM) $(NAME)
	@echo "\e[32mNettoyage de \e[0m\e[1mlibftprintf.a\e[0m \e[32mterminé\e[0m 🧹"

re : fclean all

.PHONY: all clean fclean re
