/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:47:25 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:10:54 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main()
{
	printf("%zu\n", ft_isdigit('c'));
	printf("%zu\n", isdigit('c'));

	printf("%zu\n", ft_isdigit('1'));
	printf("%zu\n", isdigit('1'));
}
*/