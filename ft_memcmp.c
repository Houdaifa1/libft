/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:45:18 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:55:58 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*src2;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char *arr1 = NULL;
	char *arr2 = NULL;
	char test1[8] = "hello ";
	char test2[8] = "hello ";
	printf("mine %d    ;    ", ft_memcmp(arr1,test1,5));
	printf("%d\n", memcmp(arr2,test2,5));
}*/
