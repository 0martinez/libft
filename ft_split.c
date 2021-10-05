/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:50:48 by omartine          #+#    #+#             */
/*   Updated: 2021/10/05 21:19:43 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	in;
	size_t	fin;
	size_t	i;
	size_t	j;
	size_t	z;
	char	**aux;

	in = 0;
	fin = 0;
	i = 0;
	j = 0;
	if (!s || !c)
		return (0);
	//contador de palabras
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
	printf("NUMERO DE PALABRAS--> %zu\n", i);//ok

	//reserva filas--una fila por cada char c encontrado
	aux = (char **) malloc(sizeof(char) * i);

	if (!aux)
		return (0);
	//guardamos el numero de palabras y reseteamos i
	z = i;
	i = 0;
	in = 0;
	while (i < z && fin < ft_strlen((const char *)s))
	{
		while (s[in] == c)
			in++;
		fin = in;
		while (s[fin] != c)
			fin++;
		//reserva por caracter separado por char c
		aux[i] = (char *) malloc(sizeof(char) * (fin - in));
		if (!aux[i])
			return (0);
		aux[i][fin - 1] = 0;
		while (in < fin)
		{
			aux[i][j] = s[in];
			in++;
			j++;
		}
		i++;
		j = 0;
		fin++;//para que no coincida con null
	}
	return (aux);
}

int main(void)
{
	char *string = "split  ||this|for|me|||||!|";
	char **aux;
	aux = ft_split(string, '|');
	int i = 0;
	while (i < 5)
	{
		printf("-%s-\n", aux[i]);
		i++;
	}
	return 0;
}
