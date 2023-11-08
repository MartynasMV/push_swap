# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 13:45:04 by mvoldema          #+#    #+#              #
#    Updated: 2022/12/27 13:45:06 by mvoldema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c \
	string_leng.c \
	sorting_hub.c \
	error_handler.c \
	1_operators_ra_rb_rr.c \
	2_operators_sa_sb_ss_pb_pa.c \
	3_digits_handler.c \
	4_digits_handler.c \
	5_digits_handler.c \
	6_and_more_digits_handler.c \
	buble_sort.c \
	indexer.c \
	radix_v2.c \
	checker_if_input_is_already_sorted.c \
	print_a_b.c \
	max_int_checker.c \
	check_if_there_is_minus_after_digit.c \

OBJ = $(SRC:.c=.o)

LIBFT = ./libft/libft.a
PRINTF = ./ft_printf/libftprintf.a

CC = cc
CFLAGS += -Wall -Wextra -Werror -g
RM = rm -rf

all:	${NAME}

$(LIBFT):
	@$(MAKE) -C ./libft

$(PRINTF):
	@$(MAKE) -C ./ft_printf

$(NAME): $(OBJ) $(LIBFT) $(PRINTF)
#	@echo "Creating test: \n"
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

clean: 
	@echo "DELETING .o FILES in libft: \n"
	@$(MAKE) clean -C ./libft
	@echo "DELETING .o FILES in printf: \n"
	@$(MAKE) clean -C ./ft_printf
	@$(RM) $(OBJ)

		
fclean: clean
	@echo "DELETING .o, .a FILES in libft: \n"
	@$(MAKE) fclean -C ./libft
	@echo "DELETING .o .a FILES in printf: \n"
	@$(MAKE) fclean -C ./ft_printf
	@$(RM) ${NAME}

re: fclean all
	@echo "DELETED AND RECOMPILED"

run: all
	./push_swap

5: all
	./push_swap "1 4 6 3 123"

6: all
	@echo "Test"

