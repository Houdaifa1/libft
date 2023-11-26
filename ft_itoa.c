/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:27:50 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/26 11:41:51 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlenght(int n)
{
	unsigned int	count;
	long			x;

	x = n;
	count = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		if (x < 0)
		{
			x = -x;
			count++;
		}
		x = x / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	l;
	long			x;

	l = ft_nlenght(n);
	x = n;
	str = (char *)malloc(l + 1);
	if (str == NULL)
		return (NULL);
	if (x == 0)
		str[0] = '0';
	str[l] = '\0';
	while (x != 0)
	{
		if (x < 0)
		{
			x = -x;
			str[0] = '-';
		}
		str[l - 1] = (x % 10) + 48;
		x = x / 10;
		l--;
	}
	return (str);
}
/*#include <stdio.h>
int main ()
{
	char *str;
	str	= ft_itoa(-512);
	printf("%s", str);
}*/
