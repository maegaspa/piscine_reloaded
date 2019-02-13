# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: maegaspa <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 12:01:50 by maegaspa     #+#   ##    ##    #+#        #
#    Updated: 2018/10/03 18:30:14 by maegaspa    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = includes/header.h

OBJET = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all :	
	gcc -c -Wall -Werror -Wextra $(SOURCE) -I $(HEADER)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

clean :
	rm -f $(OBJET)

fclean : clean
	rm -f $(NAME)

re : fclean all
