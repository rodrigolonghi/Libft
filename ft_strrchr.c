/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 00:32:30 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/31 20:12:48 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				last;
	unsigned char	*temp_s;
	unsigned char	temp_c;

	i = 0;
	last = -1;
	temp_s = (unsigned char *)s;
	temp_c = (unsigned char)c;
	while (temp_s[i])
	{
		if (temp_s[i] == temp_c)
			last = i;
		i++;
	}
	if (temp_c == '\0')
		return ((char *)temp_s + i);
	else if (last != -1)
		return ((char *)temp_s + last);
	return (NULL);
}
