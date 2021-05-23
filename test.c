/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:31:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/23 06:07:30 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

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

	//putendl_fd test
	// char string[] = "Test string";
	// int fd = 1;
	// char *c = string;
	// ft_putendl_fd(c, fd);

	//putnbr_fd test
	// int n = 0;
	// int fd = 1;
	// ft_putnbr_fd(n, fd);
	// ft_putchar_fd('\n', fd);
	// n = -2147483648;
	// ft_putnbr_fd(n, fd);
	// ft_putchar_fd('\n', fd);
	// n = 2147483647;
	// ft_putnbr_fd(n, fd);
	// ft_putchar_fd('\n', fd);
	// n = 101010;
	// ft_putnbr_fd(n, fd);
	// ft_putchar_fd('\n', fd);

	//isalpha test
	// int c = 10980;
	// int result;
	// result = isalpha(c);
	// printf("Original isalpha: %d\n", result);
	// result = ft_isalpha(c);
	// printf("My isalpha: %d\n", result);

	//isdigit test
	// int c = '1';
	// int result;
	// result = isdigit(c);
	// printf("Original isdigit: %d\n", result);
	// result = ft_isdigit(c);
	// printf("My isdigit: %d\n", result);
	// c = 1;
	// result = isdigit(c);
	// printf("Original isdigit: %d\n", result);
	// result = ft_isdigit(c);
	// printf("My isdigit: %d\n", result);

	//isalnum test
	// int c = '1';
	// int result;
	// result = isalnum(c);
	// printf("Original isalnum: %d\n", result);
	// result = ft_isalnum(c);
	// printf("My isalnum: %d\n", result);
	// c = 1;
	// result = isalnum(c);
	// printf("Original isalnum: %d\n", result);
	// result = ft_isalnum(c);
	// printf("My isalnum: %d\n", result);
	// c = 'a';
	// result = isalnum(c);
	// printf("Original isalnum: %d\n", result);
	// result = ft_isalnum(c);
	// printf("My isalnum: %d\n", result);

	//isascii test
	// int c = '1';
	// int result;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 1;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 'a';
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 128;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);

	//isprint test
	// int c = '1';
	// int result;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 1;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 'a';
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = 128;
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);
	// c = ' ';
	// result = isascii(c);
	// printf("Original isascii: %d\n", result);
	// result = ft_isascii(c);
	// printf("My isascii: %d\n", result);

	//itoa test
	// int n = -2147483648;
	// char *str;
	// str = ft_itoa(n);
	// printf("%s\n", str);
	// n = 2147483647;
	// str = ft_itoa(n);
	// printf("%s\n", str);
	// n = 0;
	// str = ft_itoa(n);
	// printf("%s\n", str);
	// n = 8761010;
	// str = ft_itoa(n);
	// printf("%s\n", str);
	return (0);
}
