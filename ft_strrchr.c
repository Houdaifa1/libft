/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:08:43 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/05 16:35:18 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i + 1 > 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char arr1[12] = "hello";
	char arr2[12] = "hello";
	printf("mine ==> %s   ;   ", ft_strrchr(arr1, 'h'));
	printf("%s", strrchr(arr2, 'h'));
}*/
