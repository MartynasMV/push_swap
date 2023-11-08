/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:49:06 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/05 11:49:07 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
	{
		return (NULL);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/* int main(void)
{
	char source_array[10]= "abcdefgh";
	char dest_array[10]= "";
	
	ft_memcpy(dest_array, source_array, 5);
	printf("%s", dest_array);
} */