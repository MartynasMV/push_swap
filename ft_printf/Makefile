# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:52:01 by mvoldema          #+#    #+#              #
#    Updated: 2022/10/13 17:09:56 by mvoldema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		hex_count.c \
		uns_c_putnbr.c \
		c_putnbr.c \
		c_putchar.c \
		c_putstr.c \
		to_hexi_x_big.c \
		to_hexi_x_small.c \
		pointer.c \
		to_hexi_pointer.c \

	
OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

AR = ar rcs

all:	${NAME}

${NAME}:
	@echo "CREATING .o FILES: \n"
	cc -c ${SRC}
	@echo "\nCREATING LIBFT.A: \n"
	${AR} $(NAME) $(OBJ)
	

clean: 
	@echo "DELETING .o FILES: \n"
	/bin/rm -f *.o
	
fclean: clean
	@echo "DELETING LIBFT.a: \n"
	/bin/rm -f ${NAME}

re: fclean all
	@echo "DELETED AND RECOMPILED"
	
