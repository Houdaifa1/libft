/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrahm <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:59:15 by hdrahm            #+#    #+#             */
/*   Updated: 2023/11/05 12:22:34 by hdrahm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	o;

	i = 0;
	s = 1;
	o = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		o = o * 10 + (str[i] - 48);
		i++;
	}
	return (o * s);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char arr1[20] = " 	iji+5668ede";
	char arr2[20] =  " 	iji+5668ede";
	printf("mine ==> %d    ;    ", ft_atoi(arr1));
	printf("%d", atoi(arr2));

}*/
