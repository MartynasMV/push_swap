/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <mvoldema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:49:09 by mvoldema          #+#    #+#             */
/*   Updated: 2023/04/24 12:18:26 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	error_handler(int error_code, int *array)
{
	if (error_code == 1)
	{
		free(array);
	}
	else if (error_code == 2)
	{
		free(array);
		exit(2);
	}
	else if (error_code == 3)
	{
		ft_printf("Error\n");
		free(array);
		exit(1);
	}
}