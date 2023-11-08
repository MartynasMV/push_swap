/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_operators_ra_rb_rr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:57:57 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:57:59 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//Shift up all elements of stack a by 1. The first element becomes the last one.
void	ra(int *stack_a, int *size, int switcher)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a[0];
	while (i < *size - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[*size - 1] = tmp;
	if (switcher == 0)
		ft_printf("ra\n");
}

//Shift down all elements of stack a by 1.
//The last element becomes the first one.
void	rra(int *stack_a, int *size, int switcher)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack_a[*size - 1];
	while (*size - i > 0)
	{
		stack_a[*size - i] = stack_a[*size - i - 1];
		i++;
	}
	stack_a[0] = tmp;
	if (switcher == 0)
		ft_printf("rra\n");
}

//Shift up all elements of stack b by 1.
//The first element becomes the last one.
void	rb(int *stack_a, int *size, int switcher)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a[0];
	while (i < *size - 1)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[*size - 1] = tmp;
	if (switcher == 0)
		ft_printf("rb\n");
}
//Shift down all elements of stack b by 1.
//The last element becomes the first one.

void	rrb(int *stack_a, int *size, int switcher)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = stack_a[*size - 1];
	while (*size - i > 0)
	{
		stack_a[*size - i] = stack_a[*size - i - 1];
		i++;
	}
	stack_a[0] = tmp;
	if (switcher == 0)
		ft_printf("rrb\n");
}

void	rr(int *stack_a, int *size)
{
	ra(stack_a, size, 0);
	rb(stack_a, size, 0);
	ft_printf("rr\n");
}
