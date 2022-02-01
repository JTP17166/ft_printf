CC 				= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM				= /bin/rm -f
NAME	= libftprintf.a
INCLUDE = ft_printf.h
SRCS	= ft_convdechex_lower.c ft_convdechex_upper.c \
					ft_p.c ft_putchar.c \
					ft_putnbr.c ft_putstr.c \
					ft_strlen.c  ft_printf.c \
					ft_convdechex_p.c ft_putnbr_u.c
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
