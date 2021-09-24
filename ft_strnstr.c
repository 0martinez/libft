/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:06:46 by omartine          #+#    #+#             */
/*   Updated: 2021/09/24 21:43:20 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && str[i] != 0)
	{
		while (dst[j] == str[i])
		{
			j++;
			i++;
		}
		if ((int )j == ft_strlen((char *)dst))
			break ;
		j = 0;
		i++;
	}
	if ((int )j == ft_strlen((char *)dst))
		return ((char *)str + (i - j));
	return (0);
}
/*
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;
	//printf("%d", ft_strlen((char *)smallstring));
	ptr = ft_strnstr(largestring, smallstring, 8);
	printf("%s", ptr);
	return (0);
}*/
