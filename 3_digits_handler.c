/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_digits_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:58:22 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:58:23 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorting_2_digits(int *stack_a, int *size_a)
{
	if (stack_a[0] > stack_a[1])
	{
		sa(stack_a, size_a, 0);
	}
}

void	sorting_3_digits(int *stack_a, int *size_a)
{
	if (stack_a[0] < stack_a[2] && stack_a[0] < stack_a[1]
		&& stack_a[1] > stack_a[2])
	{
		rra(stack_a, size_a, 0);
		sa(stack_a, size_a, 0);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2]
		&& stack_a[2] > stack_a[1])
		sa(stack_a, size_a, 0);
	else if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2]
		&& stack_a[1] > stack_a[2])
		rra(stack_a, size_a, 0);
	else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2]
		&& stack_a[1] < stack_a[2])
		ra(stack_a, size_a, 0);
	else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2]
		&& stack_a[1] > stack_a[2])
	{
		ra(stack_a, size_a, 0);
		sa(stack_a, size_a, 0);
	}
}
