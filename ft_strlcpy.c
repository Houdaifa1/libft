/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:25:39 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 12:49:40 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[j])
		j++;
	return (j);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char src1[10] = "";
	char dst1[10] = "hello";
	char src2[10] = "";
	char dst2[10]= "hello";
	printf("mine ==> %lu   ;   ", ft_strlcpy(NULL,src1,5));
	printf("%lu", strlcpy(NULL,src2,5));
}*/
