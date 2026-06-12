/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:54:43 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 13:45:37 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*
int	main(void)
{
	printf("ft_strrchr: %s\n", ft_strrchr("Hello World!", 'o'));
	printf("strrchr: %s\n\n", strrchr("Hello World!", 'o'));
	
	printf("ft_strrchr: %s\n", ft_strrchr("Hello World!", ' '));
	printf("strrchr: %s\n\n", strrchr("Hello World!", ' '));

	printf("ft_strrchr: %s\n", ft_strrchr("Hello World!", 'l'));
	printf("strrchr: %s\n\n", strrchr("Hello World!", 'l'));

	printf("ft_strrchr: %s\n", ft_strrchr("Hello World!", '\0'));
	printf("strrchr: %s\n", strrchr("Hello World!", '\0'));

	char *p = ft_strrchr("Hello World!", 'y');
	if (!p)
	{
		printf("Not Found\n");
	}

	//printf("\t%s\n", strrchr(NULL, '!'));

	return (0);
}
*/