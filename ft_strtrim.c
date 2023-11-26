/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:14:58 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 18:58:20 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findchar(const char *set, int c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	b;
	size_t	e;
	char	*trim;

	b = 0;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	e = ft_strlen(s1);
	while (s1[i] && ft_findchar(set, s1[i]) == 1)
		i++;
	while (e > i && ft_findchar(set, s1[e - 1]) == 1)
		e--;
	trim = (char *)malloc(e - i + 1);
	if (trim == NULL)
		return (NULL);
	while (i < e)
		trim[b++] = s1[i++];
	trim[b] = '\0';
	return (trim);
}
/*
#include<stdio.h>
int	main(void)
{
	char	test[20] = "hodaifkkjjjjlk";
	char	set[20] = "ohabcdefg";
	char	*result;

	result = ft_strtrim(test, set);
	printf("%s\n", result);
}*/
