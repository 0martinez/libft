/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:10:01 by omartine          #+#    #+#             */
/*   Updated: 2021/09/17 20:39:16 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
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
	if (str[i] != 0 && str[i] == '-')
	{
		simb = -1;
		i++;
	}
	while (str[i] != 0)
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (simb * num);
}
/*int main()
{
	char a[] = "        2222245";
	int i;
	i = ft_atoi(a);
	printf("%d", i);
	return 0;
}*/
