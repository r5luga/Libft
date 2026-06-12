/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:56:05 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:51:47 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char *b[10];
    printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "ABC\0", 3));
    printf("memcpy: %s\n\n", (char *)memcpy(b, "ABC\0", 3));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "hello", 5));
	printf("memcpy: %s\n\n", (char *)memcpy(b, "hello", 5));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "ABC\0", 1));
	printf("memcpy: %s\n\n", (char *)memcpy(b, "ABC\0", 1));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "AB\0", 0));
	printf("memcpy: %s\n\n", (char *)memcpy(b, "AB\0", 0));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "ABK\0", 2));
	printf("memcpy: %s\n\n", (char *)memcpy(b, "ABK\0", 2));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(b, "ABp55", 5));
	printf("memcpy: %s\n", (char *)memcpy(b, "ABp55", 5));

	//printf("\t%s\n", (char *)ft_memcpy(b, NULL, 3)); //segfault
	// printf("\t%s\n", (char *)memcpy(NULL, "ABC", 3)); //segfault
	// printf("\t%s\n", (char *)memcpy(NULL, NULL, 3)); //segfault
    
    return (0);
}
*/