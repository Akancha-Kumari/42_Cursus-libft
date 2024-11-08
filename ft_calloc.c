/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:17 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:58:05 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	int	*result;
// 	int	i;

// 	result = (int *)ft_calloc(5, 4);
// 	if (result == NULL)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
