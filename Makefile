# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfaust <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 11:10:04 by pfaust            #+#    #+#              #
#    Updated: 2018/10/09 15:28:55 by pfaust           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

SOURCE 		= ft_printf.c \
			  maillons.c \
			  parse_conversion.c \
			  parse_ordinaires.c \
			  parsing.c \
			  traitement.c \
			  conversions.c \

OBJ 		= $(SOURCE:.c=.o)

all: 		$(NAME)

$(NAME):
			gcc -g -Wall -Wextra -c $(SOURCE) libft/*.c -I ft_printf.h
			ar rc $(NAME) $(OBJ) *.o
			ranlib $(NAME)

clean:
			rm -f $(OBJ) *.o

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: 		all clean fclean re
