/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_putstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:48:10 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/14 09:48:12 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	c_putstr(char *s, int counter)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (counter + 6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		counter++;
		i++;
	}
	return (counter);
}
