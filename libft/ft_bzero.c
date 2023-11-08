/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:46:32 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 16:46:33 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = s;
	while (n > 0)
	{
		*c = '\0';
		n--;
		c++;
	}
}
/*
int	main(void)
{
	char	str[50];
	char	str2[50];

   str[50] = "This is string.h library function";
   str2[50] = "This is string.h library function";
   bzero(str + 4, 1);
   printf("%s\n", str);
   ft_bzero(str2 + 7 , 1);
   printf("%s", str2);
}
*/
