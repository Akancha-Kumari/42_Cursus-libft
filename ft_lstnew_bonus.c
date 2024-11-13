/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:26:55 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 11:06:53 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	printf("%s\n", (char *)ft_lstnew("Hello")->content);
// 	return (0);
// }
// random printf output
// struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
//struct s_list = t_list (both are same)
//struct s_list *new = (struct s_list *)malloc(sizeof(struct s_list));
//t_list *new = (t_list *)malloc(sizeof(t_list));