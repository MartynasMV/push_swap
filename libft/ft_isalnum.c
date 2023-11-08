/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:07:59 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 09:08:01 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A'
			&& argument <= 'Z') || (argument >= '0' && argument <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);
    if (isalnum(c) == 0)
        printf("%c is not an alphanumeric character.", c);
    else
        printf("%c is an alphanumeric character.", c);
    
    return (0);
}
*/

/*
int	main(void)
{
    char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));
    result = ft_isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));
	result = ft_isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));
    result = ft_isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));
    result = ft_isalnum(c);
    printf("When %c is passed, return (value is %d\n", c, result));

    return (0);
}*/
