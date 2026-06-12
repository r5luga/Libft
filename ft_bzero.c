/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 18:25:06 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/12 20:47:16 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
	return (s);
}

/*
 int	main(void)
{
	char str[10] = "Hello";
	ft_bzero(str + 3, 5);
	printf("After ft_bzero: '%s'\n", str);
	printf("ft_strlen: %zu\n", ft_strlen(str));

	return (0);
}
*/