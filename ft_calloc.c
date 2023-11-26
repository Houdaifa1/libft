/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:45:50 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 20:26:13 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count > 0 && size > 0 && (count * size) / count != size)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//char *test;
	char *test2;
	//test = ft_calloc(0, 0);
	test2 = calloc (0, 0);
	//printf("%s\n", test);
	printf("%s", test2);
}*/
