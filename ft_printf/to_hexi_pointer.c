/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexi_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:17:25 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 13:17:26 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	long_hex_count(unsigned long n)
{
	long	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	to_hexi_pointer(unsigned long num, int counter)
{
	int		remain;
	int		len;
	char	*result;

	len = long_hex_count(num);
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
