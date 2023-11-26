/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:54:09 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:57:40 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
		{
			return (&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	const char arr[20] = "hell bro";
	const char arr2 [20] = "hell bro";
	printf("%s  ;   ", ft_memchr(arr,600 , 15));
	printf("%s", memchr(arr2, 600, 15));
}*/
