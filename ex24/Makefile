# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhember <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 16:34:11 by flhember          #+#    #+#              #
#    Updated: 2018/11/07 16:46:14 by flhember         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ ft_putstr.c srcs/ft_strcmp srcs/ft_strlen.c \
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
