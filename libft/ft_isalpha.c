/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:19:59 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/03 16:20:01 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A'
			&& argument <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
    
    printf("%i", ft_isalpha(98));
    printf("\n%i", isalpha(98));
}
*/
