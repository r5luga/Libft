/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:23:42 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:17:51 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii( int c )
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int main()
{
	printf("%zu\n", ft_isascii(0));
	printf("%zu\n", isascii(0));
	
	printf("%zu\n", ft_isascii(255));
	printf("%zu\n", isascii(255));
	
}
*/