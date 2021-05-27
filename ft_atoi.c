/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 04:14:50 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/26 23:21:58 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_part2(int number, char signal, const char *str)
{
	number *= 10;
	if (signal == '-')
		number -= *str - 48;
	else
		number += *str - 48;
	return (number);
}

int	ft_atoi(const char *str)
{
	char	signal;
	int		number;

	str = ft_strtrim(str, " 	\t\n\r\v\f");
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
			number = ft_atoi_part2(number, signal, str);
		str++;
	}
	return (number);
}
