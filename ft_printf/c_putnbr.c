/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_putnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:48:44 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 09:48:46 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	c_putnbr(int n, int counter)
{
	if (n == -2147483648)
	{
		counter = c_putstr("-2147483648", counter);
	}
	else if (n < 0)
	{
		counter = c_putchar('-', counter);
		counter = c_putnbr(-n, counter);
	}
	else if (n > 9)
	{
		counter = c_putnbr(n / 10, counter);
		counter = c_putnbr(n % 10, counter);
	}
	else if (n <= 9)
	{
		n = n + '0';
		counter = c_putchar(n, counter);
	}
	return (counter);
}
