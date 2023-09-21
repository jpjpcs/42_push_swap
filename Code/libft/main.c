/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:29:46 by jode-jes          #+#    #+#             */
/*   Updated: 2023/04/27 12:42:33 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*p;
	char	str[];
	int		result;
	int		result_1;

	printf("\n___________________________\n\n");
	printf("\nTest of all libft functions\n");
	printf("\n___________________________\n\n");
	printf("\nTest of ft_isalpha letter a: \n return (is %d \n",
			ft_isalpha('a'));
	printf("\nTest of isalpha letter a: \n return (is %d \n", isalpha('a'));
	printf("\nTest of ft_isalpha: \n return (is %d \n", ft_isalpha('1'));
	printf("\nTest of isalpha: \n return (is %d \n", isalpha('1'));
	printf("\n_____________________\n\n");
	printf("\nTest of ft_isdigit: \n return (is %d \n", ft_isdigit('a'));
	printf("\nTest of isdigit: \n return (is %d \n", isdigit('a'));
	printf("\nTest of ft_isdigit: \n return (is %d \n", ft_isdigit('1'));
	printf("\nTest of isdigit: \n return (is %d \n", isdigit('1'));
	printf("\n_____________________\n\n");
	printf("\nTest of ft_isalnum: \n return (is %d \n", ft_isalnum('+'));
	printf("\nTest of isalnum: \n return (is %d \n", isalnum('+'));
	printf("\nTest of ft_isalnum: \n return (is %d \n", ft_isalnum('1'));
	printf("\nTest of isalnum: \n return (is %d \n", isalnum('1'));
	printf("\n_____________________\n\n");
	printf("\nTest of ft_isascii: \n return (is %d \n", ft_isascii(128));
	printf("\nTest of isascii: \n return (is %d \n", isascii(128));
	printf("\nTest of ft_isascii: \n return (is %d \n", ft_isascii('1'));
	printf("\nTest of isascii: \n return (is %d \n", isascii('1'));
	printf("\n_____________________\n\n");
	printf("\nTest of ft_isprint: \n return (is %d \n", ft_isprint(128));
	printf("\nTest of isprint: \n return (is %d \n", isprint(128));
	printf("\nTest of ft_isprint: \n return (is %d \n", ft_isprint(49));
	printf("\nTest of isprint: \n return (is %d \n", isprint(49));
	printf("\n_____________________\n\n");
	printf("\nTest of ft_strlen word Hello: \n str lenght is %ld \n",
			ft_strlen("hello"));
	printf("\nTest of strlen word Hello: \n str lenght is %ld \n",
			strlen("hello"));
	printf("\n_____________________\n\n");
	printf("test of memset. Return of s is: %p \n",
			ft_memset((unsigned char[]){48, 49}, 57, sizeof((int[]){48, 49})));
	printf("\n_____________________\n\n");
	str[] = "[h][e][l][l][o], world!";
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, strlen(str));
	printf("After ft_bzero: %s\n", str);
	printf("\n_____________________\n\n");
	printf("dest string before ft_memcpy: %s\n", "Hiiiiiiiiiiii");
	ft_memcpy("Hiiiiiiiiiiii", "Hello World", sizeof("Hello World"));
	printf("src string after ft_memcpy: %s\n", "Hello World");
	printf("dest string after memcpy: %s\n\n", "Hiiiiiiiiiiii");
	printf("dest string before memcpy: %s\n", "Hiiiiiiiiiiii");
	memcpy("Hiiiiiiiiiiii", "Hello World", sizeof("Hello World"));
	printf("src string after memcpy: %s\n", "Hello World");
	printf("dest string after memcpy: %s\n\n", "Hiiiiiiiiiiii");
	printf("\n_____________________\n\n");
	printf("src before ft_memmove: %s\n", "Hello World");
	printf("dest before ft_memmove: %s\n", "Hiiiiiiiiiiii");
	ft_memmove("Hi", "Hello World", sizeof("Hello World"));
	printf("src after ft_memmove: %s\n", "Hello World");
	printf("dest after ft_memmove: %s\n\n", "Hiiiiiiiiiiii");
	printf("src before memmove: %s\n", "Hello World");
	printf("dest before memmove: %s\n", "Hiiiiiiiiiiii");
	memmove("Hiiiiiiiiiiii", "Hello World", sizeof("Hello World"));
	printf("src after memmove: %s\n", "Hello World");
	printf("dest after memmove: %s\n", "Hiiiiiiiiiiii");
	printf("\n_____________________\n\n");
	p = ft_memchr("Hello, world!", 'w', strlen("Hello, world!"));
	if (p != NULL)
		printf("ft_memchr found '%c' at position %ld\n\n", 'w', (p
					- (void *)"Hello World"));
	else
		printf("ft_memchr did not find '%c'\n\n", 'w');
	p = memchr("Hello, world!", 'w', strlen("Hello, world!"));
	if (p != NULL)
		printf("memchr found '%c' at position %ld\n\n", 'w', (p
					- (void *)"Hello World"));
	else
		printf("memchr did not find '%c'\n\n", 'w');
	printf("\n_____________________\n\n");
	result = ft_memcmp("Hello, world!", "Hello, friends!", strlen("Hello,
				world!"));
	if (result == 0)
	{
		printf("The strings are equal.\n");
	}
	else if (result < 0)
	{
		printf("String 1 is less than string 2.\n");
	}
	else
	{
		printf("String 1 is greater than string 2.\n\n");
	}
	result_1 = memcmp("Hello, world!", "Hello, friends!", strlen("Hello,
				world!"));
	if (result_1 == 0)
	{
		printf("The strings are equal.\n");
	}
	else if (result_1 < 0)
	{
		printf("String 1 is less than string 2.\n");
	}
	else
	{
		printf("String 1 is greater than string 2.\n");
	}
	printf("\n_____________________\n\n");
	return (0);
}
