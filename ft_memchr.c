/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:17:00 by omartine          #+#    #+#             */
/*   Updated: 2021/09/21 21:12:25 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (ptr[i] != 0 || i != n)
	{
		if (c == ptr[i])
			return ((void *)ptr + i);
		i++;
		if (c == ptr[i])
			return ((void *)ptr + i);
	}
	return (0);
}
/*
int main(void)
{
	const char	str[] = "www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	//ret = memchr(str, ch, strlen(str));
	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
