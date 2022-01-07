# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao_pereira <joao_pereira@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 12:11:25 by joao_pereir       #+#    #+#              #
#    Updated: 2021/12/13 12:20:06 by joao_pereir      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=			gcc
NAME=		libftprintf.a
RM=			rm -f
CD=			cd

CFLAGS=		\
			-Wall\
			-Werror\
			-Wextra\

SRC_DIR=	src
LFT_DIR=	libft

SRCS=		$(shell find $(SRC_DIR) -maxdepth 1 -type f -name "*.c")
OBJS=		$(patsubst $(SRC_DIR)/%.c,$(SRC_DIR)/%.o,$(SRCS))

all: $(NAME)

$(NAME): libft $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): libft $(OBJS)
	cp $(LFT_DIR)/libft.a ./libftprintf.a
	ar rcs $@ $(OBJS)

libft:
	$(MAKE) all -C ./libft

clean:
	$(RM) $(OBJS)

fclean: clean
	$(CD) $(LFT_DIR) && make -i fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all libft clean fclean re