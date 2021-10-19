/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:10:01 by omartine          #+#    #+#             */
/*   Updated: 2021/10/19 18:03:18 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	simb;
	int	num;
	int	i;

	i = 0;
	num = 0;
	simb = 1;
	while (str[i] != 0 && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			simb = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (simb * num);
}
/*
int main()
{
	char a[] = "-214748364789999999999a999999999";
	char b[] = "-214748364789999999999a999999999";
	printf("%d\n", ft_atoi(a));
	printf("%d", atoi(b));
	return 0;
}*/
