/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:14:50 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/24 05:22:11 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	signal;
	int		number;

	nptr = ft_strtrim(nptr, " 	\n");
	signal = 0;
	number = 0;
	while (*nptr != '\0')
	{
		if ((*nptr == '-' || *nptr == '+') && signal == 0)
			signal = *nptr;
		else if ((*nptr == '-' || *nptr == '+') && signal != 0)
			break ;
		else if (*nptr < '0' || *nptr > '9')
			break ;
		else
		{
			number *= 10;
			if (signal == '-')
				number -= *nptr - 48;
			else
				number += *nptr - 48;
		}
		nptr++;
	}
	return (number);
}
