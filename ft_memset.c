/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:43:49 by omartine          #+#    #+#             */
/*   Updated: 2021/09/17 21:19:47 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, int size)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i != size)
	{
		ptr[i] = c;
		i++;
	}
	return ((void *)ptr);
}
/*int main(void)
{
	char str[] = "hola adios";
	ft_memset(str, '$', 4);
	printf("%s", str);
	return (0);
}*/
