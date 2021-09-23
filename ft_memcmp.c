/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:13:58 by omartine          #+#    #+#             */
/*   Updated: 2021/09/23 21:12:36 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				j;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	j = 0;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (j = ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char *s1 = "abbb";
	char *s2 = "ABBB";
	size_t size = 2;
	int i1;
	int i2;
	printf("%i", i1 = memcmp(s1, s2, size));
	printf("\n%i", i2 = ft_memcmp(s1, s2, size));
	return 0;
}*/
