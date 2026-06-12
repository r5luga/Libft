/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:46:49 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/19 16:03:09 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	ft_strlcat(str, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (str);
}

/*
int	main()
{
	char *a;
	
	a = ft_strjoin("We Are", "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("We Are", "");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("", "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("", "");
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin("We Are", NULL);
	printf("ft_strjoin: %s\n", a);
	free (a);
	a = ft_strjoin(NULL, "The Champions");
	printf("ft_strjoin: %s\n", a);
	free (a);

	return (0);
}
*/