/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:10:01 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 12:47:30 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	last = *lst;
	if (last == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}

// int	main(void)
// {
// 	t_list *head = ft_lstnew("my");
// 	head->next = ft_lstnew("name");
// 	head->next->next = ft_lstnew("is");

// 	ft_lstadd_back(&head, ft_lstnew("Akancha"));
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp->content);
// 		free(temp);
// 	}
// 	return (0);
// }