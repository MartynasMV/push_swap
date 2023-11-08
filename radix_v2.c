/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_up_to_100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:17 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 10:00:19 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	checker_if_input_is_already_sorted_v2(int *stack_a, int *size_a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < *size_a)
	{
		if (stack_a[i] < stack_a[i + 1])
		{
			count++;
		}
		i++;
	}
	if (count == *size_a - 1)
	{
		return (1);
	}
	else
		return (0);
}

void	radix_v2(int *stack_a, int *size_a, int *stack_b, int *size_b)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = *size_a;
	while (checker_if_input_is_already_sorted_v2(stack_a, size_a) != 1)
	{
		j = 0;
		while (j < s)
		{
			if (stack_a[0] >> i & 1)
				ra(stack_a, size_a, 0);
			else
				pb(stack_a, stack_b, size_a, size_b);
			j++;
		}
		while (*size_b != 0)
		{
			pa(stack_a, stack_b, size_a, size_b);
		}
		i++;
	}
}
