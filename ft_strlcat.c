/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:36:08 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 21:27:39 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	while (d_len < size && dst[d_len])
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] && (d_len + i) < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
int	main(void)
{
	char dst[5] = {'H', 'e', 'l', 'l', 'o'};
    char *src = "XYZ";

    printf("Return = %zu\n", ft_strlcat(dst, src, 5));
	printf("dst: %s\n", dst);
	printf("Return = %zu\n", strlcat(dst, src, 5));
	printf("dst: %s\n", dst);
	
	char b[50] = "Hello";

	printf("len: %zu + 1\n", ft_strlcat(b, " Wonderful", 50));
	printf("ft_strlcat: %s\n", b);

	printf("len: %zu + 1\n", ft_strlcat(b, " World!", 23));
	printf("ft_strlcat: %s\n", b);

	char c[50] = "Hello";

	printf("len: %zu + 1\n", strlcat(c, " Wonderful", 16));
	printf("strlcat: %s\n\n", c);

	printf("len: %zu + 1\n", strlcat(c, " World!", 23));
	printf("strlcat: %s\n", c);

	return (0);
}
*/