/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:04:33 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:34 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*pt_str;
	size_t	i;

	pt_str = (char *)str;
	i = 0;
	while (i < n)
	{
		if (pt_str[i] == (char)c)
		{
			return ((void *)&pt_str[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main () {
   const char str[] = "http://www.test.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - %s\n", ch, ret);

   return(0);
} */
