/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 00:16:26 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/31 20:03:44 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	temp_c;
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	temp_c = (unsigned char)c;
	while (*temp_s)
	{
		if (*temp_s == temp_c)
			return ((char *)temp_s);
		temp_s++;
	}
	if (temp_c == '\0')
		return ((char *)temp_s);
	return (NULL);
}
