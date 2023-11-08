/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:21:55 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 12:21:56 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = 0;
	while (i < n)
	{
		s[i] = (char)c;
		i++;
	}
	return (str);
}

/* int main(void)
{
   char str[50] = "This is string.h library function";

 printf("%s\n", str);
   ft_memset(str,'&',5);
   //puts(str);
   printf("%s", str);
   return(0);
} */