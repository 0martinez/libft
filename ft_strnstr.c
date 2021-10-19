/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:06:46 by omartine          #+#    #+#             */
/*   Updated: 2021/10/16 20:54:49 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	
	if (!str || !dst)
		return (0);
	if (!dst[0])
		return ((char *)str);
	i = 0;
	j = 0;
	while (i < len && str[i] != 0)
	{
		while (dst[j] == str[i] && i < len && str[i] != 0)
		{
			j++;
			i++;
		}
		if (j == ft_strlen((char *)dst))
			return ((char *)str + (i - j));
		j = 0;
		i++;
	}
	if (j == ft_strlen((char *)dst))
		return ((char *)str + (i - j));
	return (0);
}
/*
int	main(void)
{
	char *s1 = "AAAAAAAAAAAA";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s1, max);
	char *i2 = ft_strnstr(s1, s1, max);
	printf("%s", i2);
	return (0);
}*/
