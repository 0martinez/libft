/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:30:20 by omartine          #+#    #+#             */
/*   Updated: 2021/09/23 19:08:45 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *str, size_t n);

int		ft_isalpha(int x);

int		ft_isascii(int x);

int		ft_isdigit(int x);

int		ft_isprint(int x);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, int size);

char	ft_strchr(char *str, char x);

int		ft_strlen(char *x);

int		ft_isalnum(int x);

int		ft_toupper(int x);

int		ft_tolower(int x);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
