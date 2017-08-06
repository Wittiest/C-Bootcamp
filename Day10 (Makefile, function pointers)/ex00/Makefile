#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 23:08:41 by dpearson          #+#    #+#              #
#    Updated: 2017/07/11 23:08:41 by dpearson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libft.a

SRC			= 	./srcs/
HEADER		=	./includes

FILENAMES	=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJECTS		=	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CFLAGS		=	-Wall -Wextra -Werror
OPTION		=	-c -I $(HEADER)

SOURCES		=	$(addprefix $(SRC), $(FILENAMES))

all : $(NAME)

$(NAME):
	gcc $(CFLAGS) $(OPTION) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all