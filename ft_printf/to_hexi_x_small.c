/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexi_x_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:00:22 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 10:00:25 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	to_hexi_x_small(unsigned int num, int counter)
{
	int		remain;
	int		len;
	char	*result;

	len = hex_count(num);
	if (num == 0)
		counter = c_putchar('0', counter);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	while (num > 0)
	{
		len--;
		remain = (num % 16);
		num = num / 16;
		result[len] = "0123456789abcdef"[remain];
	}
	counter = c_putstr(result, counter);
	free(result);
	return (counter);
}
