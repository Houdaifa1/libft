/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:59:15 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/21 23:22:00 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	e;

	e = c;
	while (*s)
	{
		if (*s == e)
			return ((char *)s);
		s++;
	}
	if (e == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	return (NULL);
}
/*#include<stdio.h>
#include <string.h>

int main ()
{
	char arr1[10] = "hello";
	char arr2[10]= "hello";
	printf("mine ==> %s    ;    ", ft_strchr(arr1,'l'));
	printf("%s", strchr(arr2, 'l'));
}*/
