/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_c_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:48:56 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 09:48:57 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	uns_c_putnbr(unsigned int n, int counter)
{
	if (n > 9)
	{
		counter = uns_c_putnbr(n / 10, counter);
		counter = uns_c_putnbr(n % 10, counter);
	}
	else if (n <= 9)
	{
		n = n + '0';
		counter = c_putchar(n, counter);
	}
	return (counter);
}
