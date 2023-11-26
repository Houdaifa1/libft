/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:14:44 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/25 17:24:05 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;
	size_t	y;

	i = 0;
	j = 0;
	y = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return (NULL);
	while (s1[j])
		join[i++] = s1[j++];
	while (s2[y])
		join[i++] = s2[y++];
	join[i] = '\0';
	return (join);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[12] = "hello ";
	char	s2[12] = "tes";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
}*/
