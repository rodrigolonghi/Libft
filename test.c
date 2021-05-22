/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:31:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/22 16:19:39 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	//toupper test
	// int toupper = 'a';
	// printf("ft_toupper: %c -> ", toupper);
	// toupper = ft_toupper(toupper);
	// printf("%c\n\n", toupper);

	//tolower test
	// int tolower = 'A';
	// printf("ft_tolower: %c -> ", tolower);
	// tolower = ft_tolower(tolower);
	// printf("%c\n\n", tolower);

	//strlen test
	// size_t size;
	// char string[] = "abc";
	// char string2[] = "This is a phrase with 35 characters";
	// char *s;
	// s = string;
	// size = ft_strlen(s);
	// printf("Phrase: %s -> Size: %zu\n", string, size);
	// s = string2;
	// size = ft_strlen(s);
	// printf("Phrase: %s -> Size: %zu\n\n", string2, size);

	//substr test 1
	// char string[] = "This is a test phrase";
	// char *s;
	// char *substring;
	// s = string;
	// unsigned int start = 0;
	// size_t len = 5;
	// substring = ft_substr(s,start,len);
	// printf("Original string: %s\nStart: %u\nSize: %zu\nResult: %s\n", string, start, len, substring);

	// char string2[] = "Test";
	// s = string2;
	// start = 0;
	// len = 10;
	// substring = ft_substr(s,start,len);
	// printf("Original string: %s\nStart: %u\nSize: %zu\nResult: %s\n", string2, start, len, substring);

	//strjoin test
	// char string1[] = "Test ";
	// char string2[] = "phrase";
	// char *s1, *s2, *joined;
	// s1 = string1;
	// s2 = string2;
	// joined = ft_strjoin(s1, s2);
	// printf("String 1: %s\nString 2: %s\nJoined string: %s\n", s1, s2, joined);

	//strtrim test
	// char string[] =" \nteste     \n\n";
    // char remove[] =" \n";
	// char *s1, *set, *trim;
	// s1 = string;
	// set = remove;
	// trim = ft_strtrim(s1, set);
	// printf("%s\n", trim);

	//putchar_fd test
	// char c = 'a';
	// int fd = 1;
	// ft_putchar_fd(c, fd);
	// ft_putchar_fd('\n', fd);

	//putstr_fd test
	// char string[] = "Test string";
	// int fd = 1;
	// char *c = string;
	// ft_putstr_fd(c, fd);
	// ft_putchar_fd('\n', fd);
	return (0);
}
