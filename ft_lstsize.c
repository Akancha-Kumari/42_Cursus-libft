/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:08:15 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 11:42:48 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*curr;

	count = 0;
	if (!lst)
		return (count);
	curr = lst;
	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list *new_node = ft_lstnew("Hello");
// 	new_node->next = ft_lstnew("Akancha");
// 	printf("Count of nodes is %d", ft_lstsize(new_node));
// 	return (0);
// }