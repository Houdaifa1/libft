/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:30:19 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:56:53 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char *dst1= "NULL" ;
	//char *dst2 = "NULL";
	ft_memcpy(dst1, "tets" ,1);
	//memcpy(dst2, "tets" , 1);
	printf("this is my fun ==> %s    ;    ", dst1);
	//printf("this fuction 2 ==> %s\n", dst2);
}*/
