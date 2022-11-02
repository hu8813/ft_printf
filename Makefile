# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 12:17:41 by huaydin           #+#    #+#              #
#    Updated: 2022/11/02 12:23:30 by huaydin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
LIBC = ar -rcs

.PHONY:		all clean fclean re

all: $(NAME)

$(NAME):$(OBJS)
	$(LIBC) $(NAME) $(OBJS) 

%.o:%.c 
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

