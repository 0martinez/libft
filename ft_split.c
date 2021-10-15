/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:50:48 by omartine          #+#    #+#             */
/*   Updated: 2021/10/15 21:07:52 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, int in, int i, char c)
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
	return (i);
}

static int	in_size(char const *s, int in, char c)
{
	while (s[in] == c && s[in] != 0)
		in++;
	return (in);
}

static int	fin_size(char const *s, int fin, char c)
{
	while (s[fin] != c)
		fin++;
	return (fin);
}
//------------------------------------------------------------
/*static char	*word(char const *s, int in, int fin)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *) malloc(sizeof(char) * (fin - in + 1));
	if (!aux)
		return (0);
	aux[fin - in] = 0;
	while (in < fin)
	{
		aux[i] = s[in];
		in++;
		i++;
	}
	//printf("%s", aux);
	return (aux);
}*/
//------------------------------------------------------------
char	**ft_split(char const *s, char c)
{
	int	in;
	int	fin;
	int	i;
	int	j;
	int	adblas;
	char	**aux;

	in = 0;
	fin = 0;
	i = 0;
	j = 0;
	if (!s)
		return (0);
	i = wordcount(s, in, i, c);
	aux = (char **) malloc(sizeof(char *) * i + 1);
	if (!aux)
		return (0);
	aux[i] = 0;
	adblas = i;
	i = 0;
	in = 0;
	while (i < adblas)
	{
		in = in_size(s, in, c);
		fin = fin_size(s, in, c);
		aux[i] = (char *) malloc(sizeof(char) * (fin - in + 1));
		if (!aux[i])
			return (0);
		/*aux[i] = word(s, in, fin);
		if (aux[i] == 0)
			return (0);
		in = fin;*/
		aux[i] = (char *) malloc(sizeof(char) * (fin - in + 1));
		aux[i][fin - in] = 0;
		while (in < fin)
		{
			aux[i][j] = s[in];
			in++;
			j++;
		}
		i++;
		j = 0;
	}
	return (aux);
}
/*
int	main(void)
{
	char *s = "split  ||this|for|me|||||!|";
	ft_split(s, '|');
	return (0);
}*/
