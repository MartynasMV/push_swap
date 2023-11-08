/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_leng.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:09:45 by mvoldema          #+#    #+#             */
/*   Updated: 2023/02/07 10:09:47 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	string_leng(int *string_which_is_integer)
{
	int	i;

	i = 0;
	while (string_which_is_integer)
	{
		string_which_is_integer++;
		i++;
	}
	return (i);
}
