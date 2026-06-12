/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:45:28 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 14:24:43 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ts1;
	const unsigned char	*ts2;

	if (n == 0)
		return (0);
	ts1 = (const unsigned char *)s1;
	ts2 = (const unsigned char *)s2;
	i = 0;
	while (ts1[i] == ts2[i] && i < n - 1)
		i++;
	return (ts1[i] - ts2[i]);
}

/*
int main()
{
    printf("ft_memcmp: %d\n", ft_memcmp("ABC", "ABC", 3));
    printf("memcmp: %d\n\n", memcmp("ABC", "ABC", 3));
	
	printf("ft_memcmp: %d\n", ft_memcmp("ABC", "AC", 2));
	printf("memcmp: %d\n\n", memcmp("ABC", "AC", 2));

	printf("ft_memcmp: %d\n", ft_memcmp("BC", "ABC", 0));
	printf("memcmp: %d\n\n", memcmp("BC", "ABC", 0));

	printf("ft_memcmp: %d\n", ft_memcmp("ABC", "AB", 3));
	printf("memcmp: %d\n\n", memcmp("ABC", "AB", 3));
	
	printf("ft_memcmp: %d\n", ft_memcmp("AB", "ABC", 3));
	printf("memcmp: %d\n\n", memcmp("AB", "ABC", 3));

	printf("ft_memcmp: %d\n", ft_memcmp("ABC", "CBA", 3));
	printf("memcmp: %d\n\n", memcmp("ABC", "CBA", 3));

	// printf("ft_memcmp: %d\n", ft_memcmp("ABC", NULL, 3)); //segfault
	// printf("ft_memcmp: %d\n", ft_memcmp(NULL, "ABC", 3)); //segfault
	// printf("ft_memcmp: %d\n", ft_memcmp(NULL, NULL, 3)); //segfault
	
	return (0);
}
*/