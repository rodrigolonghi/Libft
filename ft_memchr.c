/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 00:59:39 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/25 01:01:49 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (((unsigned char *)s)[i] != '\0' && i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return (((unsigned char *)s) + i);
		i++;
	}
	if (c == '\0')
		return (((unsigned char *)s) + i);
	return (NULL);
}
