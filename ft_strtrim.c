/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 04:30:31 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/26 23:23:34 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_start(char const *s1, char const *set)
{
	int	i;
	int	start;

	start = 0;
	i = 0;
	while (set[i] != '\0')
	{
		if (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

static int	ft_find_end(char const *s1, char const *set)
{
	int	i;
	int	end;

	end = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0' && end >= 0)
	{
		if (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		size;

	if (!s1)
		return (NULL);
	else if (!set)
	{
		str = (char *)ft_calloc(ft_strlen(s1) + 1, 1);
		ft_memcpy(str, s1, ft_strlen(s1));
	}
	else
	{
		start = ft_find_start(s1, set);
		end = ft_find_end(s1, set);
		if (start > end)
			size = 0;
		else
			size = end - start + 1;
		str = (char *)ft_calloc(size, 1);
		str = ft_substr(s1, start, size);
	}
	return (str);
}
