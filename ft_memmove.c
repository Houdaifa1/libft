/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:41:43 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:47:17 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	size_t				j;
	const unsigned char	*str;
	unsigned char		*ptr;

	i = 0;
	j = 0;
	str = src;
	ptr = dst;
	if (str < ptr)
	{
		while (i < len)
		{
			ptr[j + len - 1] = str[len - 1 - i];
			i++;
			j--;
		}
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	int arr[20] = {1,600,256,4,5,6,7,8,9,10};
	int arr2[20] = {1,600,256,4,5,6,7,8,9,10};
	ft_memmove (arr +2  , arr ,9);
	memmove (arr2 +2 , arr2  , 9);
	while (i <= 12)
	{
		printf("mine %d   ;   ", arr[i]);
		printf("%d\n", arr2[i]);
		i++;
	}
}*/
