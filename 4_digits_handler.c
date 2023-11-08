/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_digits_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:58:40 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:58:43 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	min_value_checker(int *stack_a, int *size_a)
{
	int	i;
	int	min;
	int	index;

	i = 1;
	min = stack_a[0];
	index = 0;
	while (i < *size_a)
	{
		if (min > stack_a[i])
		{
			min = stack_a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	push_indexed_digit_up(int *stack_a, int *size_a)
{
	int	index;

	index = min_value_checker(stack_a, size_a);
	while (index > 0)
	{
		ra(stack_a, size_a, 0);
		index--;
	}
}

void	four_digits_handler(int *stack_a, int *stack_b, int *size_a,
		int *size_b)
{
	push_indexed_digit_up(stack_a, size_a);
	pb(stack_a, stack_b, size_a, size_b);
	sorting_3_digits(stack_a, size_a);
	pa(stack_a, stack_b, size_a, size_b);
}
