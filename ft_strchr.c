/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:43:05 by omartine          #+#    #+#             */
/*   Updated: 2021/09/24 17:37:43 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char *str, int x)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == x)
			return ((char *)str + i);
		i++;
		if (str[i] == x)
			return ((char *)str + i);
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "abcde";
	printf("%s\n", ft_strchr(a, 'b'));
	printf("%s", strchr(a, 'b'));
	return (0);
}*/
