/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:10:51 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 10:18:45 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	ft_toupper_test(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

// int	main(void) {
// 	char *original = "hello";
// 	char *modified = ft_strmapi(original, ft_toupper_test);

// 	if (modified) {
// 		printf("Original: %s\n", original);
// 		printf("Modified: %s\n", modified);
// 		free(modified);
// 	}
// 	return (0);
// }
