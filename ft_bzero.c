/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:48:33 by omartine          #+#    #+#             */
/*   Updated: 2021/09/20 19:16:17 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bero(void *str, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i != n)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
