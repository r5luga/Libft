/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:25:43 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:44:59 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main() 
{
	unsigned char uc = 255;
	signed char sc = 255;
	char c = 255;

	printf("size uc: %zu\n", uc);
	printf("size sc: %zu\n", sc);
	printf(" size c: %zu\n\n", c);
	
	char a[] = "Hello, World!";
	
    printf("ft_memset: %s\n", (char *)ft_memset(a, 'e', 1));
    printf("memset: %s\n\n", (char *)memset(a, 'e', 1));
	
	printf("ft_memset: %s\n", (char *)ft_memset(a, 'o', 10));
	printf("memset: %s\n\n", (char *)memset(a, 'o', 10));
	
	printf("ft_memset: %s\n", (char *)ft_memset(a, ' ', 4));
	printf("memset: %s\n", (char *)memset(a, ' ', 4));

	//printf("\t%s\n", (char *)ft_memset(a, 'a', 500));
	
	if (memset(NULL, 'a', 1))
	{
		//printf("\t%s\n", (char *)ft_memset(NULL, 'a', 1));
	}
	
	return (0);
}
*/