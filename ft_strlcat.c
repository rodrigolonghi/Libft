/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 05:44:11 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/25 04:27:07 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	length;

	length = 0;
	while (*dst != '\0' && length < size)
	{
		dst++;
		length++;
	}
	while (*src != '\0' && length + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
		length++;
	}
	if (length < size)
		*dst = '\0';
	while (*src != '\0')
	{
		src++;
		length++;
	}
	return (length);
}
