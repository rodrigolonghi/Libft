/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:31:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 01:17:55 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	//toupper test
	int toupper = 'a';
	printf("ft_toupper: %c -> ", toupper);
	toupper = ft_toupper(toupper);
	printf("%c\n\n", toupper);
	
	//tolower test
	int tolower = 'A';
	printf("ft_tolower: %c -> ", tolower);
	tolower = ft_tolower(tolower);
	printf("%c\n\n", tolower);
	
	//strlen test
	size_t size;
	char string[] = "abc";
	char string2[] = "This is a phrase with 35 characters";
	char *s;
	s = string;
	size = ft_strlen(s);
	printf("Phrase: %s -> Size: %zu\n", string, size);
	s = string2;
	size = ft_strlen(s);
	printf("Phrase: %s -> Size: %zu\n\n", string2, size);

	return (0);
}
