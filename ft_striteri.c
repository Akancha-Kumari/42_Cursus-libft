/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:14:57 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 12:59:52 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
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

void	ft_upper_test(unsigned int index, char *c)
{
	(void)index;
	if (c == NULL)
		return ;
	*c = (char)ft_toupper((int)*c);
}

// int	main(void) {
// 	char str[] = "hello";
// 	ft_striteri(str, ft_upper_test);
// 	printf("Modified string: %s\n", str);
// 	return (0);
// }
