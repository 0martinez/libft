/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:42:15 by omartine          #+#    #+#             */
/*   Updated: 2021/09/29 19:17:35 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	int		i;
	int		j;
	int		x;

	if (!s1)
		return (0);
	aux = (char *) malloc (sizeof(char) * (ft_strlen(s1) + 1));
	i = 0;
	j = 0;
	if (!aux)
		return (0);
	printf("%s", set);
	while (set[j] != 0)
	{
		if (set[j] == s1[i])
		{
			//printf("%s\n%c", set, s1[i]);
			i++;
			j = 0;
		}
		j++;
	}
	x = i;
	j = 0;
	while (set[j] != 0)
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		j++;
	}
	j = 0;
	while (x < i)
	{
		aux[j] = s1[x];
		x++;
		j++;
	}
	aux[j] = 0;
	return (aux);
}
*/
int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";

	char *s2 = strtrim(s1, " \n\t");
	printf("%s", s2);
	return 0;
}
