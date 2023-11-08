/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:04:17 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/05 16:04:19 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	src = (char *)src;
	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char src[] = "Hell";
	char dest[]= "12345678";
    
	ft_strlcpy(dest, src, 4);
	//after the change
	printf("%s\n", dest);
	strlcpy(dest, src, 4);
	printf("%s", dest);

}*/