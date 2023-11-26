/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:36:36 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/26 12:57:50 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	d;
	size_t	s;

	j = 0;
	s = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	if (dstsize - 1 > d && dstsize > 0)
	{
		while (src[j] && dstsize - 1 > d + j)
		{
			dst[d + j] = src[j];
			j++;
		}
		dst[d + j] = '\0';
	}
	if (dstsize <= d)
		d = dstsize;
	return (d + s);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char src1[7] = "hell";
	//char dst1[20] = "gwdwdwd";
	int i;
	i = strlcat(NULL,src1,1);
	printf("%d\n", i);
	//printf("%s\n",dst1);
}*/
