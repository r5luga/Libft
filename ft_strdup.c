/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:13:33 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/15 14:33:03 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int main()
{
	char *my_dest = "Hello";
	char *orig_dest = "Hello";
	char *src = "World";

	//my_dest[0] = 'Y'; segmentation fault
	
	my_dest = ft_strdup(src);
	orig_dest = strdup(src);
	printf("ft_strdup: %s\n", my_dest);
	printf("strdup: %s\n", orig_dest);

	my_dest[0] = 'Y';
	
	printf("ft_strdup: %s\n", my_dest);
	
	free(my_dest);
	free(orig_dest);
	
	return (0);
}
*/