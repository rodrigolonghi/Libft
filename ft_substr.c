/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 02:41:12 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/27 23:07:28 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		substring = (char *)ft_calloc(1, sizeof(char));
	else
	{
		substring = (char *)ft_calloc(len + 1, sizeof(char));
		if (!substring)
			return (NULL);
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			substring[i] = s[start + i];
			i++;
		}
	}
	return (substring);
}
