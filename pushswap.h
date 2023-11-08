/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:52:49 by mvoldema          #+#    #+#             */
/*   Updated: 2022/12/27 13:52:50 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

void	print_stack_a(int *stack_a, int size_a);
void	print_stack_b(int *stack_b, int size_b);
void	sorting_2_digits(int *stack_a, int *size_a);
void	sorting_3_digits(int *stack_a, int *size_a);
void	sa(int *list, int *list_size, int to_print_or_not_sa_or_sb);
void	sb(int *list, int *list_size, int to_print_or_not_sa_or_sb);
void	ss(int *list, int *list_size);
void	ra(int *list, int *list_size, int switcher);
void	rra(int *list, int *list_size, int switcher);
void	rb(int *list, int *list_size, int switcher);
void	rrb(int *list, int *list_size, int switcher);
void	rr(int *list, int *list_size);
void	pb(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	pa(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	sorting_hub(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	four_digits_handler(int *stack_a, int *stack_b, int *size_a,
			int *size_b);
void	five_digits_handler(int *stack_a, int *stack_b, int *size_a,
			int *size_b);
int		min_value_checker(int *stack_a, int *size_a);
void	push_indexed_digit_up(int *stack_a, int *size_a);
void	bubble_sorter(int *stack_x, int *size_x);
int		six_and_more_digits_handler(int *stack_a, int *stack_b, int *size_a,
			int *size_b);
void	indexer(int *stack_a, int *stack_x, int size_a);
void	copy_digits_from_one_string_to_another(int *dst, int *src, int size);
void	radix_v2(int *stack_a, int *size_a, int *stack_b, int *size_b);
void	error_handler(int error_code, int *array);
void	checker_if_input_is_already_sorted(int *stack_a, int *stack_b,
			int *size_a);
int		max_int_checker(char **temp_stack, int x, char *itoed, int size_a);
void	checker_if_there_is_minus_after_digit(char **string, int i, int j);

#endif
