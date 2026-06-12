/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:29:11 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:21:27 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int main()
{
	printf("ft_strlen: %zu\n", ft_strlen("Hello World!"));
	printf("strlen: %zu\n\n", strlen("Hello World!"));

	printf("ft_strlen: %zu\n", ft_strlen("   \t\r\n\v\f-+123f"));
	printf("strlen: %zu\n\n", strlen("   \t\r\n\v\f-+123f"));

	printf("ft_strlen: %zu\n", ft_strlen(""));
	printf("strlen: %zu\n\n", strlen(""));

	printf("ft_strlen: %zu\n", ft_strlen("\0"));
	printf("strlen: %zu\n", strlen("\0"));

	// printf("\t%zu\n", strlen(NULL));
	// printf("\t%d\n", strlen(NULL)); //segfault
}
*/