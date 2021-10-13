/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:32:22 by omartine          #+#    #+#             */
/*   Updated: 2021/10/13 21:15:38 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *cont)
{
	t_list	*test;

	test = (t_list *) malloc(sizeof(test));
	if (!test)
		return (0);
	test->content = cont;
	test->next = 0;
	return (test);
}
