/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_if_input_is_already_sorted.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:30:36 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/08 11:30:38 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	checker_if_input_is_already_sorted(int *stack_a, int *stack_b,
		int *size_a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < *size_a - 1)
	{
		if (stack_a[i] < stack_a[i + 1])
		{
			count++;
		}
		i++;
	}
	if (count == *size_a - 1)
	{
		error_handler(1, stack_b);
		error_handler(2, stack_a);
	}
}
