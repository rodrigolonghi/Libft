/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 00:32:30 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/25 00:35:06 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		last;
	char	*temp;

	i = 0;
	last = -1;
	temp = (char *)s;
	if (temp == NULL)
		return (NULL);
	while (temp[i] != '\0')
	{
		if (temp[i] == c)
			last = i;
		i++;
	}
	if (c == '\0')
		return (temp + i);
	else if (last != -1)
		return (temp + last);
	return (NULL);
}
