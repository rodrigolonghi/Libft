/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 04:30:31 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 05:24:51 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_find_start(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;

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

unsigned int	ft_find_end(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	end;

	end = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0')
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
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (s1 == NULL)
		str = NULL;
	else if (set == NULL)
		str = ft_substr(s1, 0, ft_strlen(s1));
	else
	{
		start = ft_find_start(s1, set);
		end = ft_find_end(s1, set) - start + 1;
		str = ft_substr(s1, start, end);
	}
	return (str);
}
