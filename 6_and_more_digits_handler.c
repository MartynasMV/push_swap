/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_digits_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:59:11 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 09:59:13 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	copy_digits_from_one_string_to_another(int *dst, int *src, int size)
{
	int	i;

	i = 0;
	while (i < (size))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int	six_and_more_digits_handler(int *stack_a, int *stack_b, int *size_a,
		int *size_b)
{
	int	*stack_x;

	stack_x = (int *)malloc(sizeof(int) * (*size_a + 1));
	if (!stack_x)
		error_handler(3, stack_x);
	stack_x[*size_a] = '\0';
	copy_digits_from_one_string_to_another(stack_x, stack_a, *size_a);
	bubble_sorter(stack_x, size_a);
	indexer(stack_a, stack_x, *size_a);
	radix_v2(stack_a, size_a, stack_b, size_b);
	free(stack_x);
	return (1);
}

/* size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	src = (char *)src;
	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
} */
