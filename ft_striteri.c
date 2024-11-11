/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:14:57 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 10:10:49 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_toupper_test(unsigned int index, char *c)
{
	if (c == NULL)
		return ;
	*c = (char)ft_toupper((int)*c);
	printf("Index: %u, Character: %c\n", index, *c);
}

// int	main(void) {
// 	char str[] = "hello";
// 	striteri(str, ft_toupper_test);
// 	printf("Modified string: %s\n", str);
// 	return (0);
// }
