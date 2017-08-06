#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:49:38 by dpearson          #+#    #+#              #
#    Updated: 2017/07/13 19:49:42 by dpearson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	ft_display_file

CFLAGS	=	-Wall -Wextra -Werror

SRC		=	./srcs/main.c ./srcs/ft_display_file.c

OBJ		=	main.o ft_display_file.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all