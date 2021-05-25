/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:14:50 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/25 03:34:34 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	signal;
	int		number;

	str = ft_strtrim(str, " 	\n");
	signal = 0;
	number = 0;
	while (*str != '\0')
	{
		if ((*str == '-' || *str == '+') && signal == 0)
			signal = *str;
		else if ((*str == '-' || *str == '+') && signal != 0)
			break ;
		else if (*str < '0' || *str > '9')
			break ;
		else
		{
			number *= 10;
			if (signal == '-')
				number -= *str - 48;
			else
				number += *str - 48;
		}
		str++;
	}
	return (number);
}
