/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:50:24 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/24 20:09:45 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*obj;
	unsigned int	i;

	if (count * size == 0)
		return (NULL);
	obj = malloc(count * size);
	i = 0;
	while (i < count * size)
	{
		obj[i] = 0;
		i++;
	}
	return ((void *)obj);
}
