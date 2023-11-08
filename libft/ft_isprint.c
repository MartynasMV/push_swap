/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:02:47 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 10:02:48 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg < 127)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
    char c;

    c = 'Q';
    printf(" %c is passed to isprint(): %d", c, isprint(c));
        printf("\n%c is passed to ft_isprint(): %d", c, ft_isprint(c));
    c = '\n';
    printf("\n%c is passed to isprint(): %d", c, isprint(c));
    printf("\n %c is passed to ft_isprint(): %d", c, ft_isprint(c));
    return (0);
}
*/
