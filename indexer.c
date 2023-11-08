/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:59:51 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:59:53 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	indexer(int *stack_a, int *stack_x, int size_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_a)
	{
		j = 0;
		while (j < size_a)
		{
			if (stack_a[i] == stack_x[j])
			{
				stack_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}
