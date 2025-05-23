# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 12:54:07 by nsilva-n          #+#    #+#              #
#    Updated: 2025/05/23 13:03:00 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = higher_lower
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRC = 	main.c				ft_compare.c		ft_getcha.c			\
		ft_glob_init.c		ft_global.c			ft_isvalidinput.c
OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
LIBFT_LIB = libft
INCLUDE_LFT = libft/libft.a

all: $(LIBFT) $(NAME)

.c.o:
	${CC} $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	@make -C $(LIBFT_LIB)
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME} $(INCLUDE_LFT)

$(OBJ_DIR)/%.o: ./%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@make clean -C ./$(LIBFT_LIB)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./$(LIBFT_LIB)

re: fclean all

.PHONY: all clean fclean re