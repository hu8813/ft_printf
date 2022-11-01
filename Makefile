NAME = libftprintf.a

SRCS =	ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJS)
	ar -rcs $(NAME) $(OBJS) 

%.o:%.c 
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
