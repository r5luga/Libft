/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:21:37 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:03:17 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha( int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main()
{
	printf("%zu\n", ft_isalpha(101));
	printf("%zu\n", isalpha(101));

	printf("'a': %d\n", ft_isalpha('a'));
	printf("'1': %d\n", ft_isalpha('1'));
	printf("'B': %d\n", ft_isalpha('B'));
	printf("'!': %d\n", ft_isalpha('!'));
	printf("'\\n': %d\n", ft_isalpha('\n'));
	printf("140: %d\n", ft_isalpha(140));

	return (0);
}
*/