/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:51:13 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/15 15:17:00 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
// -fPIC
int	main(void)
{
	char *a;
	
	a = ft_strtrim("Hello World!Hyee", "He");
	printf("ft_strtrim: %s\n", a); 
	free (a);
	a = ft_strtrim("\\nHello World\\n", "\\n");
	printf("ft_strtrim: %s\n", a); 
	free (a);
	a = ft_strtrim("xxHelloxxWorldxx", "xx");
	printf("ft_strtrim: %s\n", a); 
	free (a);
	a = ft_strtrim("Hello", NULL);
	printf("ft_strtrim: %s\n", a); 
	free (a);
	a = ft_strtrim(NULL, "World");
	printf("ft_strtrim: %s\n", a); 
	free (a);

	return (0);
} 
*/