/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:33:09 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:57:32 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
int	main(void)
{
	char b[10];
	size_t numb;
	
	numb = ft_strlcpy(b, "ABC", 3);
	printf("len: %zu + 1\n", numb);
	printf("ft_strlcpy: %s\n", b);
	printf("strlcpy: %s\n\n", b);

	
	numb = ft_strlcpy(b, "hello", 6);
	printf("len: %zu + 1\n", numb);
	printf("ft_strlcpy: %s\n", b);
	printf("strlcpy: %s\n\n", b);
	
	
	numb = ft_strlcpy(b, "hello", 3);
	printf("len: %zu + 1\n", numb);
	printf("ft_strlcpy: %s\n", b);
	printf("strlcpy: %s\n\n", b);

	
	numb = ft_strlcpy(b, "ABC", 1);
	printf("len: %zu + 1\n", numb);
	printf("ft_strlcpy: %s\n", b);
	printf("strlcpy: %s\n\n", b);

	
	numb = ft_strlcpy(b, "AB", 3);
	printf("len: %zu + 1\n", numb);
	printf("ft_strlcpy: %s\n", b);
	printf("strlcpy: %s\n", b);

	return (0);
}
*/