/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:15:59 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 16:17:34 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	pos;

	pos = 0;
	while (s[pos] != '\0')
	{
		ft_putchar_fd(s[pos], fd);
		pos++;
	}
}