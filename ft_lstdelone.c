/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:05:41 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 16:30:45 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main(void)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (1);
	node->content = strdup("Hello");
	node->next = NULL;

	printf("Before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, &free);
	printf("After deletion\n");
	//printf("After deletion: %s\n", (char *)node->content);
	
	return (0);
} 
*/