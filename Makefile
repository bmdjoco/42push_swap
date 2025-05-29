# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 10:50:33 by bdjoco            #+#    #+#              #
#    Updated: 2025/05/29 11:42:22 by bdjoco           ###   ########.fr        #
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
	./src/args_func.c \
	./src/checker_bis.c \
	./src/checker.c \
	./src/error_msg.c \
	./src/list_utils.c \
	./src/sort_func_bis.c \
	./src/sort_func_last.c \
	./src/sort_func.c \
	./src/sort_method.c \
	./main.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all : $(NAME)
	@echo "Tout est compilé ​👍​"

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@chmod 777 push_swap

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJ)
	@echo "Nettoyage des fichiers source terminé 🧹"

fclean : clean
	@$(RM) $(NAME)
	@echo "Nettoyage de libftprintf.a terminé 🧹"

re : fclean all

.PHONY: all clean fclean re
