/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:16:46 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/19 15:36:29 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*
//#include <bsd/string.h>
int	main(void)
{
	size_t	i;
	i = 5;
	if (ft_strnstr("lpedroso", "ro", i))
		printf("%s\n", ft_strnstr("lpedroso", "ro", i));
	else
		printf("NULL\n");
	
	//printf("%s\n", strnstr("lpedroso", "ro", 5));
}
*/