/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:02:35 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:13:45 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum( int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main()
{
	printf("%zu\n", ft_isalnum('c'));
	printf("%zu\n", isalnum('c'));

	printf("%zu\n", ft_isalnum('*'));
	printf("%zu\n", isalnum('*'));
	
}
*/