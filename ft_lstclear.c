/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:07:38 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 16:40:29 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*
int main(void)
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return (1);

	node1->content = strdup("Hello");
	node2->content = strdup("World");
	node3->content = strdup("42");

	node3->next = node2;
	node2->next = node1;
	node1->next = NULL;

	//printf("Before clear: %s\n", (char *)node2->content);
	while (node3 != NULL)
	{
		printf("Content %s\n", (char *)node3->content);
		node3 = node3->next;
	}
	ft_lstclear(&node3, &free);
	printf("After clearing list\n");
	if (node3 == NULL)
		printf("node3 is NULL\n");
	else
		printf("node3 not NULL");

	return (0);
	
	//ft_lstdelone(*lst, del);
	//del((*lst)->content);
	//free(*lst);

} 
*/