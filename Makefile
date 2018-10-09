# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfaust <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 11:10:04 by pfaust            #+#    #+#              #
#    Updated: 2018/10/09 14:07:49 by pfaust           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

SOURCE 		= ft_printf.c \
			  maillons.c \
			  parse_conversion.c \
			  parse_ordinaires.c \
			  parsing.c \
			  arguments.c \
			  conversions.c \

OBJ 		= $(SOURCE:.c=.o)

all: 		$(NAME)

$(NAME):
			gcc -g -Wall -Wextra -Werror -c $(SOURCE) libft/*.c -I ft_printf.h
			ar rc $(NAME) $(OBJ) *.o
			ranlib $(NAME)

clean:
			rm -f $(OBJ) *.o

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: 		all clean fclean re
