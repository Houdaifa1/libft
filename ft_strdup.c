/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:39:05 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/07 12:19:33 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "hel";
	char *s2 = "hel";
	char *dest1 = ft_strdup(s1);
	char *dest2 = strdup(s2);
	printf("ft_strdup(\"%s\"): \"%s\"\n", s1, dest1);
	printf("strdup(\"%s\"): \"%s\"\n", s2, dest2);
}*/
