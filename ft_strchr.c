/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:43:05 by omartine          #+#    #+#             */
/*   Updated: 2021/09/17 18:46:50 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strchr(char *str, char x)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == x)
			return (str[i]);
		i++;
	}
	return (0);
}