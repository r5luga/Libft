/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:14:05 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 17:02:05 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*my_list;
	t_list	*my_node;
	t_list	*my_tail;

	if (!lst || !f || !del)
		return (NULL);
	my_list = NULL;
	while (lst)
	{
		my_node = ft_lstnew(f(lst->content));
		if (!my_node)
		{
			ft_lstclear(&my_list, del);
			return (NULL);
		}
		if (!my_list)
			my_list = my_node;
		else
			my_tail->next = my_node;
		my_tail = my_node;
		lst = lst->next;
	}
	return (my_list);
}

/*
void *ft_strdup_wrapper(void *content)
{
    return ft_strdup((char *)content); 
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(strdup("1"));
    t_list *node2 = ft_lstnew(strdup("2"));
    t_list *node3 = ft_lstnew(strdup("3"));

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    t_list *new_list = ft_lstmap(list, ft_strdup_wrapper, free);

	ft_lstiter(list, print_content);
	
    while (new_list != NULL)
    {
        printf("%s\n", (char *)new_list->content);
        new_list = new_list->next;
    }
    ft_lstclear(&list, free);
	ft_lstclear(&new_list, free);

    return 0;
} 
*/