/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:24:54 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 17:55:24 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char arr[5] = "hello";
	char arr2[5] = "hello";
	ft_bzero(arr,3);
	bzero(arr2,3);
	printf("this is my function ==> %s\n", arr);
	printf("this is the other function ==> %s\n", arr2);
}*/
