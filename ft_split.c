/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 00:17:29 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/26 19:58:40 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static void
	ft_write_wrd(char const *s, char **result, char c, unsigned int index)
{
	unsigned int	start;
	unsigned int	pos;

	start = 0;
	pos = 0;
	while (s[pos] != '\0' && s[pos] == c)
		pos++;
	while (start < index)
	{
		if (s[pos] == c)
		{
			start++;
			while (s[pos] != '\0' && s[pos] == c)
				pos++;
			continue ;
		}
		pos++;
	}
	start = pos;
	while (s[pos] != '\0' && s[pos] != c)
		pos++;
	result[index] = (char *)ft_calloc(pos - start + 1, 1);
	if (!result[index])
		ft_free_result(result);
	ft_memcpy(result[index], s + start, pos - start);
}

static void
	ft_last_wrd (char const *s, char **result, char c, unsigned int index)
{
	unsigned int	start;
	unsigned int	end;

	start = ft_strlen(s) - 1;
	while (s[start] == c)
		start--;
	end = start;
	while (s[start] != c)
		start--;
	start++;
	result[index] = (char *)ft_calloc(end - start + 2, 1);
	if (!result[index])
		ft_free_result(result);
	ft_memcpy(result[index], s + start, end - start + 1);
}

static unsigned int	ft_nbr_wrd(char const *s, char c)
{
	unsigned int	nbr_wrd;
	unsigned int	pos;

	nbr_wrd = 0;
	pos = 0;
	if (!s[0])
		return (0);
	while (s[pos] != '\0' && s[pos] == c)
		pos++;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
		{
			nbr_wrd++;
			while (s[pos] != '\0' && s[pos] == c)
				pos++;
			continue ;
		}
		pos++;
	}
	if (s[pos - 1] != c)
		nbr_wrd++;
	return (nbr_wrd);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	index;
	char			**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(8 * (ft_nbr_wrd(s, c) + 1));
	index = 0;
	if (ft_nbr_wrd(s, c) == 1)
	{
		result[0] = (char *)ft_calloc(ft_strlen(s) + 1, 1);
		ft_memcpy(result[0], s, ft_strlen(s));
		index++;
	}
	while (index < ft_nbr_wrd(s, c))
	{
		if (index == ft_nbr_wrd(s, c) - 1)
			ft_last_wrd(s, result, c, index);
		else
			ft_write_wrd(s, result, c, index);
		index++;
	}
	result[index] = 0;
	return (result);
}
