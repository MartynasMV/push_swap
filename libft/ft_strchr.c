/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:28:36 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/06 14:28:37 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int searched_item)
{
	unsigned int	i;

	i = 0;
	if ((char)searched_item == '\0')
	{
		return ((char *)&s[ft_strlen(s)]);
	}
	while (s[i])
	{
		if (s[i] == (char)searched_item)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	int searched_item = 'e';
	char string[] = "teste";
	printf("%s", strchr(string, searched_item));
	printf("\n");

	int searched_item2 = 'e';
	char string2[] = "teste";
	printf("%s", ft_strchr(string2, searched_item2));
	return (0);
} */