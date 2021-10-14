/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:12:24 by omartine          #+#    #+#             */
/*   Updated: 2021/10/14 21:23:58 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	if (*lst == 0)
		free(*lst);
	else
	{
		while (*lst != 0)
		{
			del((*lst)->content);
			free(*lst);
			*lst = (*lst)->next;
		}
	}
}
