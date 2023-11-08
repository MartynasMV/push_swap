/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:28:52 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 10:28:54 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)

{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
  char val='9';
  if(isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");
  return (0);
}
*/
/*
int	main(void)
{
	
	char val='\n';
	printf("%i\n", isascii(val));
	printf("%i", ft_isascii(val));
}
*/
