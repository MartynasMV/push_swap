/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:17:07 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 13:17:09 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	pointer(unsigned long pointer, int counter)
{
	if (!pointer)
	{
		write(1, "(nil)", 5);
		return (counter + 5);
	}
	counter = c_putstr("0x", counter);
	counter = to_hexi_pointer(pointer, counter);
	return (counter);
}
