/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 02:41:12 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 05:09:15 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	if (s == NULL)
		substring = NULL;
	else
	{
		substring = (char *)malloc(len + 1);
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			substring[i] = s[start + i];
			i++;
		}
		if (i < len)
		{
			while (i < len)
			{
				substring[i] = '\0';
				i++;
			}
		}
		substring[i] = '\0';
	}
	return (substring);
}
