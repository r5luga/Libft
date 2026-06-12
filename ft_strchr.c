/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:50:44 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 13:31:16 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/*
int	main(void)
{
	printf("ft_strchr: %s\n", ft_strchr("Hello World!", 'o'));
	printf("strchr: %s\n\n", strchr("Hello World!", 'o'));
	
	printf("ft_strchr: %s\n", ft_strchr("Hello World!", ' '));
	printf("strchr: %s\n\n", strchr("Hello World!", ' '));

	printf("ft_strchr: %s\n", ft_strchr("Hello World!", 'd'));
	printf("strchr: %s\n\n", strchr("Hello World!", 'd'));

	printf("ft_strchr: %s\n", ft_strchr("Hello World!", '\0'));
	printf("strchr: %s\n", strchr("Hello World!", '\0'));

	printf("\t%s\n", ft_strchr(NULL, '!'));

	return (0);
}
*/