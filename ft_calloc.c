/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:09:48 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/13 16:44:10 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/*
int main()
{
	size_t *arr;
	int i;
	size_t elements = 4;
	
	arr = ft_calloc(elements, sizeof(size_t));
	i = 0;
	while (i < elements)
	{
		printf("calloc arr[%d]: %zu\n", i, arr[i]);
		i++;
	}
	free(arr);
	
	arr = calloc(elements, sizeof(size_t));
	i = 0;
	while (i < elements)
	{
		printf("malloc arr[%d]: %zu\n", i, arr[i]);
		i++;
	}
	free(arr);

	printf("\n");
	
	int size = 4;
	printf ("%p\n", ft_calloc(elements, size));
	printf ("%p\n", calloc(elements, size));
	
	size_t huge = SIZE_MAX;

	if (ft_calloc(huge, huge) == NULL)
	{
		printf("huge is NULL\n");
	}
	
	
	return (0);
}
*/