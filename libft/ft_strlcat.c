/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:31:26 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/07 09:31:27 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
	{
		dst[i + j] = '\0';
	}
	return (ft_strlen(src) + i);
}
/*
int	main(void)
{
	char src[] = "lorem";
	char dest[]= "12";
    
	//after the change
	printf("%zu\n", ft_strlcat(dest, src, 2));
	printf("%zu", strlcat(dest, src, 2));
	return(0);

}*/