/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 02:41:12 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 03:11:27 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (len == 0)
		substring = NULL;
	else
	{
		substring = (char *)malloc(len);
		while (start < len && s[start] != '\0')
		{
			substring[start] = s[start];
			start++;
		}
		if (start < len)
		{
			while (start < len)
			{
				substring[start] = '\0';
				start++;
			}
		}
	}
	return (substring);
}
