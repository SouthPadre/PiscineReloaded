# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraymon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 17:51:26 by mraymon           #+#    #+#              #
#    Updated: 2019/04/02 18:07:48 by mraymon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all: $(NAME)

$(NAME): precompile
	gcc -Wall -Wextra -Werror -o $(NAME) ./*.o
precompile:
	gcc	-Wall -Wextra -Werror -c ./*.c
clean:
	rm -f ./*.o
fclean: clean
	rm -f $(NAME)
re: fclean all

