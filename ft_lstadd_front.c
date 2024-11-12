/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:10:41 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 11:11:12 by akumari          ###   ########.fr       */
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

// int main(void)
// {
// 	t_list *frontnode = NULL;
//     t_list *new_node = ft_lstnew("Hello");
//     ft_lstadd_front(&frontnode, new_node);

//     if (frontnode && frontnode->content) {
//         printf("%s\n", (char *)frontnode->content);
//     }
//     free(new_node);
//     return (0);
// }