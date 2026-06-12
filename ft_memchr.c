/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:42:25 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 14:09:21 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ts;

	ts = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ts[i] == (unsigned char)c)
			return ((void *)&ts[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	const char s[] = "Hello, World!";

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'e', 5));
	printf("memchr: %s\n\n", (char *)memchr(s, 'e', 5));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'o', 10));
	printf("memchr: %s\n\n", (char *)memchr(s, 'o', 10));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'l', 3));
	printf("memchr: %s\n\n", (char *)memchr(s, 'l', 3));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 101, 2));
	printf("memchr: %s\n", (char *)memchr(s, 101, 2));

	// printf("\t%p\n", ft_memchr(NULL, 'a', 1)); //segfault
	// printf("\t%p\n", ft_memchr(NULL, 'a', 1)); //segfault

	return (0);
}
*/