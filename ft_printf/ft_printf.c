/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:46 by mvoldema          #+#    #+#             */
/*   Updated: 2022/11/07 11:58:48 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	shorter(const char *str, int i, va_list args, int counter)
{
	if (str[i] == 'c')
		counter = c_putchar(va_arg(args, int), counter);
	else if (str[i] == 's')
		counter = c_putstr(va_arg(args, char *), counter);
	else if (str[i] == 'p')
		counter = pointer(va_arg(args, unsigned long), counter);
	else if (str[i] == 'i' || str[i] == 'd')
		counter = c_putnbr(va_arg(args, int), counter);
	else if (str[i] == 'u')
		counter = uns_c_putnbr(va_arg(args, unsigned int), counter);
	else if (str[i] == 'x')
		counter = to_hexi_x_small(va_arg(args, unsigned int), counter);
	else if (str[i] == 'X')
		counter = to_hexi_x_big(va_arg(args, unsigned int), counter);
	else if (str[i] == '%')
		counter = c_putchar('%', counter);
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		counter;

	counter = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			counter = shorter(str, i, args, counter);
		}
		else
			counter = c_putchar(str[i], counter);
		i++;
	}
	va_end(args);
	return (counter);
}

/* int	main(void)
{
	int i;

	i = 0;
	i = ft_printf(" NULL %x NULL \n", -15);
	ft_printf("%i\n", i);
	printf(" NULL %x NULL ", -15);
	
} */

/* int	main(void)
{
	ft_printf("%p", 17);
	ft_printf("\n");
	printf("%p", 17);
} */
