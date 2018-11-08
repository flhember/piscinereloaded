
NAME = ft_display_file

SRC = srcs/affichage.c srcs/main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) affichage.o main.o

clean:
	/bin/rm -rf affichage.o main.o

fclean:
	/bin/rm -rf $(NAME)

re: fclean all
