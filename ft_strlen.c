/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:25:13 by omartine          #+#    #+#             */
/*   Updated: 2021/09/27 17:21:56 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *x)
{
	size_t	i;

	i = 0;
	while (x[i] != 0)
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_strlen(""));
	return (0);
}*/
