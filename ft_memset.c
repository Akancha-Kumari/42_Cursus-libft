/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:21 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:51 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "akancha";

	ft_memset(str, 'y', 5);
	puts(str);
	return (0);
}
*/
