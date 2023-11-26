/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:23:39 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/21 16:30:08 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j] && str[i + j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char *s1 = "A";
 	size_t max = ft_strlen(s1) + 1;
 	char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);

 	if (i1 == i2)
 	printf("%s\n",  i1);
 	printf("%s", i2);
}*/
