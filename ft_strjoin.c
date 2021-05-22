/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 03:24:30 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 04:13:35 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*string;
	unsigned int	i;
	unsigned int	j;

	if (s1 == NULL && s2 == NULL)
		string = NULL;
	else
	{
		string = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
		i = 0;
		while (s1 != NULL && s1[i] != '\0')
		{
			string[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2 != NULL && s2[j] != '\0')
		{
			string[i + j] = s2[j];
			j++;
		}
		string[i + j] = '\0';
	}
	return (string);
}
