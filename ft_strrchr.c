/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:57:05 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 15:17:25 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s = "akancha";
// 	char del = 'h';
// 	char *res = ft_strrchr(s,del);
// 	printf("%s\n", res);
// 	return (0);
// }

/*The strrchr() function returns a pointer to the  last  occurrence  of  the
		character c in the string s.
*/
