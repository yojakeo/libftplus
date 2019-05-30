# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 10:33:30 by japarbs           #+#    #+#              #
#    Updated: 2019/05/21 12:08:03 by japarbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
OBJ = *.o
SRCF = *.c
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I $(INCLUDES) -c $(SRCF)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)
	/bin/rm -f $(OBJ)

re: fclean all

.PHONY: all clean fclean re
