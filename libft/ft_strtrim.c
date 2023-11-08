/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:35:05 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/19 15:35:21 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j - 1]))
		j--;
	dst = ft_substr(s1, i, (j - i));
	return (dst);
}

/* int	main(void)
{
    char *s1 = "--SString--";
    char *set = "-gS";
    char *result = ft_strtrim(s1, set);
    printf("%s", result);
} */