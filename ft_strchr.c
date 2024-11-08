/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:28 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:50 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  strchr()  function  returns  a pointer to the first occurrence of the
		character c in the string s.
		The strchr() function locates the first occurence of c (converted to a char)
		in the string pointed to by s. The terminating null character is considered
		to be part of the string; therefor if c is '\0', the function locate the
		terminating '\0'.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	char *str = "akancha";
// 	char del = '\0';
// 	char *res = ft_strchr(str,del);
// 	printf("%s\n", res);
// 	return (0);
// }