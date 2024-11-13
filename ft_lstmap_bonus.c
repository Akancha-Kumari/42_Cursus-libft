/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:29:43 by akumari           #+#    #+#             */
/*   Updated: 2024/11/13 12:04:03 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_head;

	new_list = NULL;
	new_head = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_head = ft_lstnew(f(lst->content));
		if (new_head == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_head);
		lst = lst->next;
	}
	return (new_list);
}

void	*to_convert_upper(void *content)
{
	char	*str;
	int		i;

	if (content == NULL)
		return (NULL);
	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	t_list *head = ft_lstnew(ft_strdup("my"));
//     head->next = ft_lstnew(ft_strdup("name"));
//     head->next->next = ft_lstnew(ft_strdup("is"));
//     head->next->next->next = ft_lstnew(ft_strdup("Akancha"));

//     ft_lstmap(head, to_convert_upper, free);
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