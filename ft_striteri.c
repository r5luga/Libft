/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:18:13 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/15 16:23:00 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void to_upper(unsigned int i, char *c)
{
    //(void)i;
    //if (*c >= 'a' && *c <= 'z')
    //    *c = *c - 32;
	i *= 1;
	*c = ft_toupper(*c);
}
void shift(unsigned int i, char *c)
{
    *c = *c + i;
}
int main(void)
{
	char s1[] = "hello world";
    char s2[] = "abcdef";

    ft_striteri(s1, to_upper);
    printf("Uppercase: %s\n", s1);

    ft_striteri(s2, shift);
    printf("Shifted:   %s\n", s2);

    ft_striteri(NULL, to_upper);
    ft_striteri(s1, NULL);

    return 0;
}
*/