/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexi_x_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:00:52 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 10:00:54 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	to_hexi_x_big(unsigned int num, int counter)
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
		if (remain > 9)
			result[len] = remain - 10 + 'A';
		else
			result[len] = remain + '0';
	}
	counter = c_putstr(result, counter);
	free(result);
	return (counter);
}
