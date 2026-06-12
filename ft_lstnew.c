/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpedroso <lpedroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:45:45 by lpedroso          #+#    #+#             */
/*   Updated: 2026/05/18 15:49:51 by lpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_node;

	my_node = malloc(sizeof(t_list));
	if (!my_node)
		return (NULL);
	my_node->content = content;
	my_node->next = NULL;
	return (my_node);
}

/*
int main()
{
	char *content = "Hello, World!";
	t_list *new_node = ft_lstnew(content);
	while (new_node != NULL)
	{
		printf("%s\n", (char *)new_node->content);
		new_node = new_node->next;
	}
	//printf("content: %s\n", (char *)new_node->content);
	//ft_lstclear(&new_node, &free);
	return (0);
}
*/