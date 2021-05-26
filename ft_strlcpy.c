/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 05:57:46 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/26 01:56:47 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	pos;

	pos = 0;
	if (size > 0)
	{
		while (pos < size - 1 && src[pos])
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	pos = 0;
	while (src[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
