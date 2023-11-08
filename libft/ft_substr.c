/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:34:09 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/19 15:34:22 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	if (len >= ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
	}
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
	{
		return (NULL);
	}
	while ((s[i] && i < len))
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/* int main(void)
{
	char const *string = "12345";
	unsigned int start = 2;
	size_t len = 2;
	char *substring = ft_substr(string, start, len);
	printf("%s", substring);
} */
