/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:40:53 by akumari           #+#    #+#             */
/*   Updated: 2024/11/13 12:03:53 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	to_change_upper(void *content)
{
	char	*str;
	int		i;

	if (content == NULL)
		return ;
	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
}

// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("my"));
//     head->next = ft_lstnew(ft_strdup("name"));
//     head->next->next = ft_lstnew(ft_strdup("is"));
//     head->next->next->next = ft_lstnew(ft_strdup("Akancha"));

//     ft_lstiter(head, to_change_upper);
// 	t_list *temp = head;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// 	temp = head;
//     while (temp) {
//         t_list *next_address = temp->next;
//         free(temp->content);
//         free(temp);
//         temp = next_address;
//     }
//     return (0);
// }

/*
the process of going through each node in a linked list and applying a specific
function f to the data (content) stored in each node. This kind of operation is
useful for performing the same action on every element in a list,
	such as printing,
modifying, or performing some calculation on each node's content.
*/