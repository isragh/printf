NAME= printf.a

CC= cc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRC= ft_pointer.c\
	ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putnbr_hex.c\
	ft_putnbr_uns.c\
	ft_putstr.c\
	ft_strlen.c

OBJS= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME)$(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
