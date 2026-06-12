/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:55:07 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/19 15:47:53 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
	t_list *list = NULL;
	ft_lstadd_front(&list, ft_lstnew("primeiro"));
	ft_lstadd_front(&list, ft_lstnew("segundo"));
	ft_lstadd_front(&list, ft_lstnew("terceiro"));
	while (list != NULL)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("NULL\n");
	return (0);
}

int   main(void)
{
      t_list      *head = NULL;
      t_list      *a;
      t_list      *b;
      t_list      *c;

      a = ft_lstnew("A");
      b = ft_lstnew("B");
      c = ft_lstnew("C");

      ft_lstadd_front(&head, a);
      print_list(head);   // A -> NULL

      ft_lstadd_front(&head, b);
      print_list(head);   // B -> A -> NULL

      ft_lstadd_front(&head, c);
      print_list(head);   // C -> B -> A -> NULL

      return (0);
}
} 
*/