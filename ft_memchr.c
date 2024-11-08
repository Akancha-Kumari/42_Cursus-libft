/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:52 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:59 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memchr() function scans the initial n bytes of the memory area pointed
		to by s for the first instance of c.  Both c and the bytes of  the  memory
		area pointed to by s are interpreted as unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	size_t				i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *str = "akancha";
// 	char *res = ft_memchr(str, 'n', 7);
// 	printf("%s\n", res);
// 	return (0);
// }