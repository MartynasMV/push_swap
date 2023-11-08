/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:36:12 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/19 15:36:20 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	absolute_value(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

static int	length(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = length(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		len--;
		result[len] = absolute_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}

/* int	main(void)
{
	int n = -2147483648; //-2147483648
	printf("%s", ft_itoa(n));
} */