/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:31:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/21 02:57:19 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	int toupper = 'a';
	printf("ft_toupper: %c -> ", toupper);
	toupper = ft_toupper(toupper);
	printf("%c\n", toupper);
	
	int tolower = 'A';
	printf("ft_tolower: %c -> ", tolower);
	tolower = ft_tolower(tolower);
	printf("%c\n", tolower);
	
	return (0);
}
