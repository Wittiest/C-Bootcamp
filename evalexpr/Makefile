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

NAME		=	eval_expr

SRC			= 	./srcs/
HEADER		=	./includes/

FILENAMES	= main.c functions.c eval_expr.c
OBJECTS		= main.o functions.o eval_expr.o

FLAGS		=	-Wall -Wextra -Werror
# The -I is for a directory of includes. The -c is to make object files.
OPTION		=	-I $(HEADER)

SOURCES		=	$(addprefix $(SRC), $(FILENAMES))

all : $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(OPTION) $(SOURCES)
	@gcc $(FLAGS) $(OPTION) $(OBJECTS) -o $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all