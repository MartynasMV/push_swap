/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_there_is_minus_after_digit.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:17:30 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/10 16:17:31 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	checker_if_there_is_minus_after_digit(char **string, int i, int j)
{
	if (string[i][j] >= 48 && string[i][j] <= 57 && string[i][j + 1] == '-')
	{
		free_double_array(string);
		ft_printf("Error\n");
		exit(1);
	}
}
