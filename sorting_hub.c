/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_hub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:28 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 10:00:30 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorting_hub(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (*size_a == 2)
		sorting_2_digits(stack_a, size_a);
	else if (*size_a == 3)
		sorting_3_digits(stack_a, size_a);
	else if (*size_a == 4)
		four_digits_handler(stack_a, stack_b, size_a, size_b);
	else if (*size_a == 5)
		five_digits_handler(stack_a, stack_b, size_a, size_b);
	else if (*size_a > 5)
		six_and_more_digits_handler(stack_a, stack_b, size_a, size_b);
}
