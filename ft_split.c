/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:50:48 by omartine          #+#    #+#             */
/*   Updated: 2021/10/16 03:11:57 by omartine         ###   ########.fr       */
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
//si fallan los tester con ft position 1ºin_pos
static int	position(char const *s, int pos, char c, int flg)
{
	
	if (flg == 1)
	{
		while (s[pos] == c && s[pos] != 0)
			pos++;
		return (pos);
	}
	while (s[pos] != c && s[pos] != 0)
		pos++;
	return (pos);
}
/*
static int	fin_pos(char const *s, int fin, char c)
{
	while (s[fin] != c && s[fin] != 0)
		fin++;
	return (fin);
}*/
//------------------------------------------------------------
static char	*word(char const *s, int in, int fin)
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
	//printf("%s\n", aux);
	return (aux);
}
//------------------------------------------------------------
char	**ft_split(char const *s, char c)
{
	int	in;
	int	fin;
	int	i;
	//int	j;
	int	adblas;
	char	**aux;

	in = 0;
	fin = 0;
	i = 0;
	//j = 0;
	if (!s)
		return (0);
	adblas = wordcount(s, in, i, c);
	aux = (char **) malloc(sizeof(char *) * adblas + 1);
	if (!aux)
		return (0);
	aux[adblas] = 0;
	in = 0;
	while (i < adblas)
	{
		in = position(s, in, c, 1);
		//fin = position(s, in, c, 0);
		/*if (!aux[i])
			return (0);*/
		//aux[i] = (char *) malloc(sizeof(char) * (fin - in + 1));
		aux[i] = word(s, in, fin = position(s, in, c, 0));
		if (!aux[i])
			return (0);
		in = fin;
		i++;
		/*aux[i] = (char *) malloc(sizeof(char) * (fin - in + 1));
		aux[i][fin - in] = 0;
		while (in < fin)
		{
			aux[i][j] = s[in];
			in++;
			j++;
		}
		i++;
		j = 0;*/
	}
	return (aux);
}

int	main(void)
{
	char *s = "split  ||this|for|me|||||!|";
	char **aux;
	aux = ft_split(s, '|');
	int i = 0;
	while (aux[i] != 0)
	{
		printf("%s\n", aux[i]);
		i++;
	}
	return (0);
}
