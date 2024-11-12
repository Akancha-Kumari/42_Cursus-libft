/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:49:13 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 13:18:47 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("my"));
// 	head->next = ft_lstnew(ft_strdup("name"));
// 	head->next->next = ft_lstnew(ft_strdup("is"));
// 	head->next->next->next = ft_lstnew(ft_strdup("Akancha"));

// 	t_list *temp = head->next;
// 	ft_lstdelone(head, free);
// 	head = temp;
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	return (0);
// }