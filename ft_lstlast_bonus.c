/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:44:37 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 12:09:20 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	if (!lst)
		return (NULL);
	curr = lst;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	return (curr);
}

// int main(void)
// {
// 	t_list *head = ft_lstnew("Hello");
// 	head->next = ft_lstnew("Name");
// 	head->next->next = ft_lstnew("Akancha");

// 	t_list *tail = ft_lstlast(head);
// 	if (tail != NULL)
// 		printf("The tail of the linked list is: %s\n", (char *)tail->content);
// 	else
// 		printf("The linked list is empty.\n");
// 	free(head->next->next);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }