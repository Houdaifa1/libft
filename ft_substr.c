/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:58:51 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 17:23:02 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	l;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l)
		return (ft_strdup(""));
	if (len + start > l)
		len = l - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*result;
	result = ft_substr("hello", 5, 1);
	printf("%s", result);
}*/
