/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_int_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:56:37 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/09 14:56:39 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	max_int_checker(char **temp_stack, int x, char *itoed, int size_a)
{
	if (ft_strncmp(temp_stack[x], itoed, size_a + 1) != 0)
	{
		free_double_array(temp_stack);
		free(itoed);
		return (1);
	}
	else
		return (0);
}
