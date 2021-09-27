/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:40:34 by omartine          #+#    #+#             */
/*   Updated: 2021/09/27 19:03:11 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*aux;

	aux = (size_t *) malloc(size * count);
	if (!aux)
		return (0);
	ft_bzero(aux, count * size);
	return ((void *)aux);
}
