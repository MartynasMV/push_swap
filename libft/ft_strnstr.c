/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:43:31 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/07 15:43:32 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pt_big;
	char	*pt_little;
	size_t	i;
	size_t	j;

	pt_big = (char *)big;
	pt_little = (char *)little;
	i = 0;
	if (pt_little[0] == '\0')
		return (pt_big);
	while (pt_big[i] && i < len)
	{
		j = 0;
		if (pt_big[i] == pt_little[j])
		{
			while ((i + j) < len && pt_big[i + j] == pt_little[j])
			{
				j++;
				if (!pt_little[j])
					return (&pt_big[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *largestring = "Foo Bar Baz";
	char *smallstring = "Ba";

    printf ("%s",ft_strnstr(largestring, smallstring, 11));
}*/