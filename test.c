/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 02:31:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/05/25 00:38:51 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//strmapi test
// char	ft_toupper_char(unsigned int i, char c)
// {
// 	i = 32;
// 	if (c >= 'a' && c <= 'z')
// 		c -= i;
// 	return (c);
// }

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

	//split test
	// char *s = ",,,,,JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,";
	// char c = ',';
	// char **result;
	// result = ft_split(s, c);
	// if (result != NULL)
	// {
	// 	for (int i = 0; result[i] != NULL; i++)
	// 		printf("%s ", result[i]);
	// }
	// else
	// 	printf("(NULL)");
	// printf("\n");

	//strmapi test
	// char *s = "test";
	// s = ft_strmapi(s, ft_toupper2_char);
	// printf("%s\n", s);

	//atoi test
	// char *nptr = "    			\n\n\n12345    			\n\n\n";
	// int nbr;
	// nbr = atoi(nptr);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr2 = "-2147483648";
	// nbr = atoi(nptr2);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr2);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr3 = "2147483647";
	// nbr = atoi(nptr3);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr3);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr4 = "-1234a567890";
	// nbr = atoi(nptr4);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr4);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr5 = "-123 4567890";
	// nbr = atoi(nptr5);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr5);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr6 = "--1234567890";
	// nbr = atoi(nptr6);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr6);
	// printf("My atoi:       %d\n", nbr);
	// char *nptr7 = "++1234567890";
	// nbr = atoi(nptr7);
	// printf("Original atoi: %d\n", nbr);
	// nbr = ft_atoi(nptr7);
	// printf("My atoi:       %d\n", nbr);

	//strdup test
	// char *s = "Dup";
	// char *dup;
	// dup = ft_strdup(s);
	// printf("%s\n", dup);

	//strnstr test
	// const char *largestring = "Foo Bar Baz";
	// const char *smallstring = "Bar";
	// char *ptr;
	// ptr = ft_strnstr(largestring, smallstring, 10);
	// printf("%s\n", ptr);

	//calloc test
	// char *s1, *s2;
	// s1 = calloc(5, 1);
	// s2 = ft_calloc(5, 1);
	// printf("Original calloc: %zu\nMy calloc:       %zu\n", sizeof(s1), sizeof(s2));

	//bzero test
	// char *s = malloc(5);
	// size_t i = 0;
	// ft_bzero(s, 5);
	// while (i < 5)
	// {
	// 	if (s[i] != 0)
	// 	{
	// 		printf("Error!\n");
	// 		break ;
	// 	}
	// 	i++;
	// }
	// if (i == 5)
	// 	printf("Success!\n");

	//strchr test
	// const char *s = "abcdefghijklmnopqrstuvwxyz0123456789";
	// char *p;
	// p = ft_strchr(s, '\0');
	// printf("%s\n", p);

	//strrchr test
	// const char *s = "abcde0123abcde0";
	// char *p;
	// p = ft_strrchr(s, 'a');
	// printf("%s\n", p);
	return (0);
}
