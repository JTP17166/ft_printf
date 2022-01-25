CC 				= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM				= /bin/rm -f
NAME	= libftprintf.a
INCLUDE = .
SRCS	= libft/ft_convdechex_lower.c libft/ft_convdechex_upper.c \
					libft/ft_p.c libft/ft_putchar.c \
					libft/ft_putnbr.c libft/ft_putstr.c \
					libft/ft_strlen.c  src/ft_printf.c
OBJS	= $(SRCS:.c=.o)
all: 		$(NAME) clean
$(NAME): 	$(OBJS) $(INCLUDE)
					$(LIB1) $(NAME) $(OBJS)
					$(LIB2) $(NAME)
bonus:		$(NAME) clean
.c.o:
					$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
clean:
					$(RM) $(OBJS)
fclean: 	clean
					$(RM) $(NAME)
re: 				fclean all
rebonus:	fclean bonus
.PHONY:		all clean fclean re bonus rebonus
