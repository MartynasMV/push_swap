/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoldema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:31:54 by mvoldema          #+#    #+#             */
/*   Updated: 2022/10/04 09:31:55 by mvoldema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void) {
  
  int len1, len2, len3, len4;
  
  //initializing the strings
  char string1[] = "Hello";
  char string2[] = {'c','o','m','p','u','t','e','r','\0'};
  
  //calculating the length of the two strings
  len1 = strlen(string1);
  len2 = strlen(string2);
  len3 = ft_strlen(string1);
  len4 = ft_strlen(string2);
  
  //displaying the values
  printf("Length of string1 is: %d \n", len1);
  printf("Length of string1 is: %d \n", len3);
  printf("Length of string2 is: %d \n", len2);
  printf("Length of string2 is: %d \n", len4);
}
*/