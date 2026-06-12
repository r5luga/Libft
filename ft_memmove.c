/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:01:58 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:54:24 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char str1[] = "abcdef";
	char str2[] = "abcdef";
    
	ft_memmove(str1 + 2, str1, 4);
	printf("ft_memmove: %s\n", str1);
	ft_memmove(str2, str2 + 2, 4);
	printf("ft_memmove: %s\n", str2);

	char str3[] = "abcdef";
	char str4[] = "abcdef";
    
	ft_memmove(str3 + 2, str3, 4);
	printf("ft_memmove: %s\n", str3);
	ft_memmove(str4, str4 + 2, 4);
	printf("ft_memmove: %s\n", str4);

}
*/