/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_operators_sa_sb_ss_pb_pa.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <mvoldema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:58:10 by mvoldema          #+#    #+#             */
/*   Updated: 2023/04/24 12:42:31 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
//Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.

void	sa(int *stack_a, int *size, int to_print_or_not_sa_or_sb)
{
	int	tmp;

	if (*size >= 2)
	{
		tmp = stack_a[1];
		stack_a[1] = stack_a[0];
		stack_a[0] = tmp;
		if (to_print_or_not_sa_or_sb == 0)
			ft_printf("sa\n");
	}
}
// Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.

void	sb(int *stack_a, int *size, int to_print_or_not_sa_or_sb)
{
	int	tmp;

	if (*size >= 2)
	{
		tmp = stack_a[1];
		stack_a[1] = stack_a[0];
		stack_a[0] = tmp;
		if (to_print_or_not_sa_or_sb == 0)
			ft_printf("sb\n");
	}
}

void	ss(int *stack_a, int *size)
{
	sa(stack_a, size, 0);
	sb(stack_a, size, 0);
	ft_printf("ss\n");
}

//pb (push b): Take the first element at the top of a and
//put it at the top of b. Do nothing if a is empty.

void	pb(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	temp;

	temp = stack_a[0];
	ra(stack_a, size_a, 1);
	*size_a -= 1;
	*size_b += 1;
	stack_b[*size_b - 1] = temp;
	rra(stack_b, size_b, 1);
	ft_printf("pb\n");
}

//(push a): Take the first element at the top of b and
// put it at the top of a. Do nothing if b is empty.

void	pa(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	temp;

	temp = stack_b[0];
	rb(stack_b, size_b, 1);
	*size_a += 1;
	*size_b -= 1;
	stack_a[*size_a - 1] = temp;
	rra(stack_a, size_a, 1);
	ft_printf("pa\n");
}
