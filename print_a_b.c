/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_a_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:53:58 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/08 15:54:00 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_stack_a(int *stack_a, int size_a)
{
	int	i;

	i = 0;
	if (stack_a[i] == 0)
	{
		i = 1;
	}
	while (i < size_a)
	{
		ft_printf("%i", stack_a[i]);
		i++;
	}
}

void	print_stack_b(int *stack_b, int size_b)
{
	int	i;

	i = 0;
	while (i < size_b)
	{
		ft_printf("%i\n", stack_b[i]);
		i++;
	}
}
