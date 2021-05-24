/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 00:17:29 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/24 03:17:21 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_last_wrd(char const *s, char **result, int start, int index)
{
	int	i;

	i = start - 1;
	while (s[i] != '\0')
		i++;
	result[index] = ft_substr(s, start, (i - start));
	index++;
	result[index] = NULL;
}

int	ft_nbr_wrd(char const *s, char c)
{
	int	nbr_wrd;
	int	pos;

	nbr_wrd = 0;
	pos = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
			nbr_wrd++;
		pos++;
	}
	return (nbr_wrd + 1);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		pos;
	int		index;
	char	**result;

	if (s == NULL)
		return (NULL);
	s = ft_strtrim(s, &c);
	result = (char **)malloc(8 * (ft_nbr_wrd(s, c) + 1));
	start = 0;
	pos = 0;
	index = 0;
	while (s[pos] != '\0')
	{
		if (s[pos] == c)
		{
			result[index] = ft_substr(s, start, (pos - start));
			start = pos + 1;
			index++;
		}
		if (index == ft_nbr_wrd(s, c) - 1)
			ft_last_wrd(s, result, start, index);
		pos++;
	}
	return (result);
}
