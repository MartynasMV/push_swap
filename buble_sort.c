/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:59:41 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:59:43 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	bubble_sorter(int *stack_x, int *size_x)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < *size_x - 1)
	{
		j = 0;
		while (j < *size_x - i - 1)
		{
			if (stack_x[j] > stack_x[j + 1])
			{
				temp = stack_x[j];
				stack_x[j] = stack_x[j + 1];
				stack_x[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
