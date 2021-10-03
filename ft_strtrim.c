/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:42:15 by omartine          #+#    #+#             */
/*   Updated: 2021/09/30 16:15:19 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*aux;

	i = 0;
	j = 0;
	z = 0;
	while (set[j] != 0)
	{
		//printf("%zu", j);
		if (set[j] != s1[i])
			j++;
		else
		{
			//printf(" ");
			j = 0;
			i++;
		}
	}
	//printf(" %zu", j);
	j = ft_strlen((const char *)s1);
	while (set[z] != 0)
	{
		if (set[z] != s1[j])
			z++;
		else
		{
			z = 0;
			j--;
		}
	}
	aux = (char *) malloc (sizeof(char) * (j - z + 1));
	if (!aux)
		return (0);
	z = 0;
	//printf("%zu", z);
	while (i <= j)
	{
		aux[z] = s1[i];
		i++;
		z++;
	}
	aux[j] = 0;
	printf("%s", aux);
	return (aux);
}
int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";

	char *s2 = ft_strtrim(s1, " \n\t");
	//printf("%s", s2);
	return 0;
}
