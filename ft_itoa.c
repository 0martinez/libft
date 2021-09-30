/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:59:47 by omartine          #+#    #+#             */
/*   Updated: 2021/09/30 21:09:42 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_aux(int n, int j, char *aux, int sb)
{
	if (n < 10)
	{
		j--;
		aux[j] = '0' + n;
		//printf("(+%c+-%d-)", aux[j], j);
	}
	else
	{
		ft_aux(n / 10, (j-- - 1), aux, sb);
		aux[j] = '0' + (n % 10);
		//printf("(+%c+-%d-)", aux[j], j);
	}
}

char	*ft_itoa(int n)
{
	char	*aux;
	int		i;
	int		j;
	int		sb;

	j = 0;
	i = 1;
	if (n < 0)
	{
		j++;
		sb = -1;
		n = sb * n;
	}
	while (i < n)
	{
		i *= 10;
		j++;
	}
	aux = (char *) malloc (sizeof(char) * j);
	if (!aux)
		return (0);
	if (sb < 0)
		aux[0] = '-';
	ft_aux(n, j, aux, sb);
	aux[j] = 0;
	return (aux);
}
/*
int	main(void)
{
	char *i1 = ft_itoa(147483648);
	return (0);
}*/
