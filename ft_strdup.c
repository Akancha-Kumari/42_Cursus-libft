/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:34 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:49 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy_str;
	size_t	i;

	cpy_str = (char *)malloc(ft_strlen(src) + 1);
	if (cpy_str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy_str[i] = src[i];
		i++;
	}
	cpy_str[i] = '\0';
	return (cpy_str);
}

// int	main(void)
// {
// 	const char	*str = "Akancha";
// 	char		*result;

// 	result = ft_strdup(str);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
