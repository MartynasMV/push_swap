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

NAME = libft.a

SRC =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	free_double_array.c \
	
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
	
