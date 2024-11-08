/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:58 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:57 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while ((str1 || str2) && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str = "akancha";
// 	char *str2 = "akancha";

// 	int res = ft_memcmp(str, str2, 7);
// 	printf("%d\n", res);
// 	return (0);
// }