/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:36:46 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/06 16:36:47 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int searched_item)
{
	int	len;

	len = ft_strlen(s);
	if ((char)searched_item == '\0')
	{
		return ((char *)&s[len]);
	}
	while (len >= 0)
	{
		if ((char)searched_item == s[len])
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}

/* int main()
{

	int searched_item = 'b';
	char string[] = "abbbbbc";
	printf("%s", strrchr(string, searched_item));
	printf("\n");

	
	int searched_item2 = 'b';
	char string2[] = "abbbbbc";
	printf("%s", ft_strrchr(string2, searched_item2));
	return(0);
} */
