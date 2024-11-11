/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:17 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 15:26:53 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	if (size != 0 && (total_size / size != count))
		return (NULL);
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
