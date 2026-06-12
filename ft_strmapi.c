/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:14:35 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/15 16:06:58 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	ft_ctoupper(unsigned int index, char c)
{
	//if (c >= 'a' && c <= 'z')
	//	c -= 32;
	//index *= 1;
	//return (c);
	index *= 1;
	return (ft_toupper(c));
}

int	main(void)
{
	char str[] = "abcdefg";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strmapi(str, ft_ctoupper));
	return (0);
}
*/