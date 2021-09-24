/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:35:19 by omartine          #+#    #+#             */
/*   Updated: 2021/09/24 21:45:29 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	size_t	flg;

	i = 0;
	j = 0;
	flg = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			j = i;
			flg++;
		}
		i++;
		if (s[i] == c)
		{
			j = i;
			flg++;
		}
	}
	if (flg != 0)
		return ((char *)s + j);
	return (0);
}
/*
int main(void)
{
	char *src = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');
	printf("%s\n", d1);
	printf("%s", d2);
	return (0);
}*/
