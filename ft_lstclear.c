/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:19:14 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 13:40:06 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("my"));
//     head->next = ft_lstnew(ft_strdup("name"));
//     head->next->next = ft_lstnew(ft_strdup("is"));
//     head->next->next->next = ft_lstnew(ft_strdup("Akancha"));

//     ft_lstclear(&head, free);

//     while (head)
//     {
//         printf("%s\n", (char *)head->content);
//         head = head->next;
//     }
//     return (0);
// }

//ft_lstclear function is designed to delete all nodes in a 
//linked list and free their allocated memory, effectively "clearing" the list.
/*
The loop in ft_lstclear runs until all nodes in the list have been freed, and 
*lst is set to NULL.
The function iterates through each node in the list.
For each node, it:
Saves the address of the next node,
Frees the content of the current node (using the del function),
Frees the current node itself,
Moves to the next node.
When the loop completes, *lst is set to NULL, leaving the list empty.
*/