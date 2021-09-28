/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fT_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:32:48 by omartine          #+#    #+#             */
/*   Updated: 2021/09/28 20:28:09 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	aux = (char *) malloc (sizeof(char) * (len + 1));
	if (aux == 0)
		return (0);
	if (ft_strlen(s) <= start)
	{
		aux[i] = 0;
		return (aux);
	}
	while (i < len)
	{
		aux[i] = s[start];
		i++;
		start++;
	}
	aux[i] = '\0';
	return (aux);
}
