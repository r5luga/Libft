/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:10:51 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 16:44:03 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("primeiro")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("segundo")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("terceiro")));

    ft_lstiter(list, print_content);

	ft_lstclear(&list, &free);
	
	if (list = NULL)
		printf("list is null");
	
    while (list != NULL)
    {
        t_list *temp = list;
        list = list->next;
        free(temp->content);
        free(temp);
    }
    return 0;
}
*/