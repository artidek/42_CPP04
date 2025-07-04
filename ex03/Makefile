# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/01 21:34:53 by aobshatk          #+#    #+#              #
#    Updated: 2025/07/04 21:31:03 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = materias

$(NAME):
	$(CC) $(CFLAGS) AMateria.cpp Icharacter.cpp Character.cpp Ice.cpp Cure.cpp IMateriaSource.cpp MateriaSource.cpp main.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re