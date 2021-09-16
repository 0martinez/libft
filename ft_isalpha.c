/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:19:11 by omartine          #+#    #+#             */
/*   Updated: 2021/09/16 20:21:46 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_isalpha(char x)
{
    if (x >= 'A' && x <= 'Z' || x >='a' && x <= 'z')
        return 1;
    return 0;
}

int main(void)
{
    int i;
    char x = 'x';
    i = ft_isalpha(x);
    return i;
}
