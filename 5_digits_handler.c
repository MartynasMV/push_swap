/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_digits_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:58:58 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:59:00 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	push_indexed_digit_up_v2(int *stack_a, int *size_a)
{
	int	index;

	index = min_value_checker(stack_a, size_a);
	if (index <= 3)
	{
		while (index != 0)
		{
			ra(stack_a, size_a, 0);
			index--;
		}
	}
	else if (index > 3)
	{
		while (index != 5)
		{
			rra(stack_a, size_a, 0);
			index++;
		}
	}
}

void	five_digits_handler(int *stack_a, int *stack_b, int *size_a,
		int *size_b)
{
	push_indexed_digit_up_v2(stack_a, size_a);
	pb(stack_a, stack_b, size_a, size_b);
	push_indexed_digit_up_v2(stack_a, size_a);
	pb(stack_a, stack_b, size_a, size_b);
	sorting_3_digits(stack_a, size_a);
	pa(stack_a, stack_b, size_a, size_b);
	pa(stack_a, stack_b, size_a, size_b);
}
