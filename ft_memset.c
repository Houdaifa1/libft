/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:54:02 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:44:55 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	arr[12] = "HELLO WORLD";
	char	arr2[12] = "HELLO WORLD";

	ft_memset(arr, 48, 5);
	memset(arr2, 48, 5);
	printf("this my function  ==> %s     ;    ", arr);
	printf(" %s", arr2);
}*/
