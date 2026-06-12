/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:40:31 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:20:13 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main()
{
	printf("%zu\n", ft_isprint('c'));
	printf("%zu\n", isprint('c'));

	printf("%zu\n", ft_isprint('\n'));
	printf("%zu\n", isprint('\n'));
}
*/