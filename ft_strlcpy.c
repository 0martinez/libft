/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:16:04 by omartine          #+#    #+#             */
/*   Updated: 2021/09/23 18:50:44 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
void	test(int size)
{
	char	string[] = "Hello there, Venus";
	char	buffer[19];
	int		r;

	r = ft_strlcpy(buffer,string,size);
	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
}

int main(void)
{
	test(19);
	test(10);
	test(1);
	test(0);
	return(0);
}*/
