/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:00:22 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 17:04:38 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	t_list *node3 = ft_lstnew("3");

	ft_lstadd_front(&list,node1);
	ft_lstadd_front(&list,node2);
	ft_lstadd_front(&list,node3);

	t_list *last = ft_lstlast(list);
    printf("last->content: %s\n", (char *)last->content);
	while (list != NULL)
	{
		printf("Content %s\n", (char *)list->content);
		list = list->next;
	}
}
*/