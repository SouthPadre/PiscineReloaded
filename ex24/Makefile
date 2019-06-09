# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraymon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 17:39:43 by mraymon           #+#    #+#              #
#    Updated: 2019/04/02 17:45:38 by mraymon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all: $(NAME)

$(NAME): precompile
	ar rc $(NAME) ./*.o
precompile:
	gcc -c ./srcs/*.c -I ./includes/
clean:
	rm -f ./*.o
fclean: clean
	rm -f ./$(NAME)
re:	fclean all
