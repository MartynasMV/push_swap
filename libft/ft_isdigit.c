/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:02:22 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 09:02:25 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
    char c;

    c='5';
    printf("Num in ORIGINAL function: %d", isdigit(c));
    printf("\nNum in ft_ function: %d", ft_isdigit(c));
    c='+';
    printf("\nNon Num in ORIGINAL: %d", isdigit(c));
        printf("\nNon Num in in ft_ function: %d", isdigit(c));
    return (0);
} */
/* int	main(void)
{
	printf("%i\n", isdigit(9));
	printf("%i\n", ft_isdigit(9));
} */