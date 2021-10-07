/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:50:48 by omartine          #+#    #+#             */
/*   Updated: 2021/10/07 21:15:56 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, size_t in, size_t i, char c)
{
	while (s[in] != 0)
	{
		if (s[in] == c)
			in++;
		else
		{
			i++;
			while (s[in] != c && s[in] != 0)
				in++;
		}
	}
	printf("NUMERO DE PALABRAS--> %zu\n", i);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	in;
	size_t	fin;
	size_t	i;
	size_t	j;
	char	**aux;

	in = 0;
	fin = 0;
	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (c == 0)
	{
		aux = (char **) malloc (sizeof(char *) * 2);
		if (!aux)
			return (0);
		aux[0] = (char *) malloc(ft_strlen(s) * sizeof(char) + 1);
		ft_strlcpy(aux[0], s, ft_strlen(s) + 1);
		aux[1] = 0;
		return (aux);
	}
	i = wordcount(s, in, i, c);
	printf("%zu", i);
	aux = (char **) malloc(sizeof(char *) * i + 1);
	if (!aux)
		return (0);
	aux[i] = 0;
	i = 0;
	in = 0;
	while (aux[i] != 0)
	{
		while (s[in] == c)
			in++;
		fin = in;
		while (s[fin] != c)
			fin++;
		//reserva por caracter separado por char c
		aux[i] = (char *) malloc(sizeof(char) * (fin - in + 1));
		printf("%zu", fin - in);
		if (!aux[i])
			return (0);
		aux[i][fin - in] = 0;
		while (in < fin)
		{
			aux[i][j] = s[in];
			in++;
			j++;
		}
		printf("-%s-\n", aux[i]);
		i++;
		j = 0;
	}
	return (aux);
}

int	main(void)
{
	char **expected = ft_split("--!--1-2-3-4-5-6-7-8-9---111111", '-');
	int i = 0;
	while (expected[i] != 0)
	{
		//printf("%s\n", expected[i]);
		i++;
	}
	return 0;
}
