/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:17:29 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/05 15:17:30 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst || src)
	{
		if (src < dst)
		{
			while (i < len)
			{
				((char *)dst)[len - i - 1] = ((char *)src)[len - i - 1];
				i++;
			}
		}
		else
		{
			while (i < len)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
		}
	}
	return (dst);
}

/*
int	main(void)
{
	char source_array[10]= "abc";
	char dest_array[10]= "123456";
	
	ft_memmove(dest_array, source_array, 3);
	printf("%s", dest_array);
}
*/
