/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:24:56 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 16:30:28 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_number(char digit, int fd)
{
	if (digit != 'x')
		ft_putchar_fd(digit, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	digit[10];
	int		column;

	column = 0;
	while (column < 10)
	{
		if (n < 0)
		{
			digit[column] = (n % 10) * (-1) + '0';
			if (column == 0)
				ft_putchar_fd('-', fd);
		}
		else if (n == 0 && column != 0)
			digit[column] = 'x';
		else
			digit[column] = n % 10 + '0';
		n /= 10;
		column++;
	}
	column = 9;
	while (column >= 0)
	{
		ft_print_number(digit[column], fd);
		column--;
	}
}
