/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:17:23 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/21 11:08:05 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;	

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (sign * res);
}
/*
int main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f-+123f"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f-+123f"));

	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f-12 3f"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f-12 3f"));
	
	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f -2147483648"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f -2147483648"));

	//printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f -2147483649"));
	//printf("atoi: %d\n\n", atoi("   \t\r\n\v\f -2147483649"));
	
	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f 2147483647"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f 2147483647"));
	
	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f 0001"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f 0001"));

	printf("ft_atoi: %d\n", ft_atoi(""));
	printf("atoi: %d\n", atoi(""));
	
	// printf("\t%d\n", ft_atoi(NULL)); //segfault
	// printf("\t%d\n", atoi(NULL)); //segfault

    return (0);
}
*/