/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:43:05 by omartine          #+#    #+#             */
/*   Updated: 2021/09/21 18:29:50 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_strchr(const char *str, char x)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == x)
			return (str[i]);
		i++;
	}
	return (0);
}
