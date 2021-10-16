/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:43:05 by omartine          #+#    #+#             */
/*   Updated: 2021/10/16 18:57:47 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == (char )x)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == (char )x)
		return ((char *)str + i);
	return (0);
}
/*
int	main(void)
{
	char	a[] = "tripouille";
	printf("%s\n", ft_strchr(a, 't' + 256));
	printf("%s", strchr(a, 't' + 256));
	return (0);
}*/
