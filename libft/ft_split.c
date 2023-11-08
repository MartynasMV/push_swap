/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:35:52 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/19 15:36:01 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
				{
					return (count);
				}
			}
		}
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		return (len);
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	char	**arr;

	i = 0;
	x = 0;
	arr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
	{
		return (NULL);
	}
	while (x < word_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		arr[x] = ft_substr(s, i, word_len(&s[i], c));
		i = i + word_len(&s[i], c);
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

/* int	main(void)
{
	char *s = "      123 sfsdf sdf ";
	char c = ' ';
	char **array = ft_split(s,c);
	int i = 0;
	while(i < word_count(s,c))
	{
		printf("%s", array[i]);
		i++;
	}
	i = 0;
	while (array[i])
    {
        free(array[i]);
        i++;
    }
	return(0);
}
 */