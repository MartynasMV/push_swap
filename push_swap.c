/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:00:01 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 10:00:03 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pushswap.h"

static void	check_if_string_only_numeric(char **string)
{
	int	i;
	int	j;

	i = 0;
	while (string[i])
	{
		j = 0;
		while (string[i][j])
		{
			if ((string[i][j] < 48 || string[i][j] > 57) && string[i][j] != '-')
			{
				free_double_array(string);
				ft_printf("Error\n");
				exit(1);
			}
			else
				checker_if_there_is_minus_after_digit(string, i, j);
			j++;
		}
		i++;
	}
}

static void	check_for_doubles(int *stack_a, int *size_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	while (i < *size_a)
	{
		j = i + 1;
		while (j < *size_a)
		{
			if (stack_a[j] == stack_a[i])
			{
				error_handler(1, stack_b);
				error_handler(3, stack_a);
			}
			j++;
		}
		i++;
	}
}

static int	calculating_space_for_malloc(int ac, char **av)
{
	int		i;
	char	**temp_stack;
	int		counter;
	int		j;

	i = 0;
	counter = 0;
	while (i < ac - 1)
	{
		j = 0;
		temp_stack = ft_split(av[i + 1], ' ');
		check_if_string_only_numeric(temp_stack);
		while (temp_stack[j])
		{
			counter++;
			j++;
		}
		i++;
		free_double_array(temp_stack);
	}
	return (counter);
}

static void	fill_stack_a(int ac, char **av, int *stack_a, int size_a)
{
	int		i;
	char	**temp_stack;
	int		k;
	int		x;
	char	*itoed;

	k = 0;
	i = 0;
	while (i < ac - 1)
	{
		temp_stack = ft_split(av[i + 1], ' ');
		x = -1;
		while (temp_stack[++x])
		{
			stack_a[k] = ft_atoi(temp_stack[x]);
			itoed = ft_itoa(stack_a[k]);
			if (max_int_checker(temp_stack, x, itoed, size_a) == 1)
				error_handler(3, stack_a);
			k++;
			free(itoed);
		}
		i++;
		free_double_array(temp_stack);
	}
}

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	size_b;
	int	size_a;

	if (ac > 1)
	{
		size_a = calculating_space_for_malloc(ac, av);
		stack_a = (int *)ft_calloc(size_a + 1, sizeof(int));
		if (!stack_a)
			error_handler(3, stack_a);
		fill_stack_a(ac, av, stack_a, size_a);
		stack_b = (int *)ft_calloc(size_a + 1, sizeof(int));
		if (!stack_b)
			error_handler(3, stack_b);
		size_b = 0;
		check_for_doubles(stack_a, &size_a, stack_b);
		checker_if_input_is_already_sorted(stack_a, stack_b, &size_a);
		sorting_hub(stack_a, stack_b, &size_a, &size_b);
		error_handler(1, stack_a);
		error_handler(1, stack_b);
	}
}
/* int main(ac av)
{
	int malloc count;
	int *stacka;

	if ac 1
		return (mallo count = getmalloccount);
	stacka = malloc (sizeof int * malloccount);
	stacka = fillstacka;
	checkfordoubles;
	stackb = malloc (sizeof int * malloccount);
	stack b = bzero;
	doalgostuffto swap;
	return (0);

} */
