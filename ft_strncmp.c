/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:29:34 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 13:59:29 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	i = 0;
	if (n == 0)
		return (0);
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (i < n && ts1[i] && ts2[i] && ts1[i] == ts2[i])
		i++;
	if (i == n)
		return (0);
	return (ts1[i] - ts2[i]);
}

/*
int main(void)
{	
	printf("ft_strncmp: %d\n", ft_strncmp("ABC", "ABC", 3));
	printf("strncmp: %d\n\n", strncmp("ABC", "ABC", 3));

	printf("ft_strncmp: %d\n", ft_strncmp("ABC", "ABC", 2));
	printf("strncmp: %d\n\n", strncmp("ABC", "ABC", 2));
	
	printf("ft_strncmp: %d\n", ft_strncmp("ABC", "ABC", 0));
	printf("strncmp: %d\n\n", strncmp("ABC", "ABC", 0));

	printf("ft_strncmp: %d\n", ft_strncmp("ABC", "AB", 3));
	printf("strncmp: %d\n", strncmp("ABC", "AB", 3));

	printf("ft_strncmp: %d\n", ft_strncmp("ABC", "CBA", 3));
	printf("strncmp: %d\n", strncmp("ABC", "CBA", 3));

	// printf("\t%d\n", ft_strncmp("ABC", NULL, 3)); //segfault
	// printf("\t%d\n", ft_strncmp(NULL, "ABC", 3)); //segfault
	// printf("\t%d\n", ft_strncmp(NULL, NULL, 3)); //segfault

    return (0);
}
*/