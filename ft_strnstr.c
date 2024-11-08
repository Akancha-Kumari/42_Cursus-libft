/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:57:01 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:39 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strnstr() function locates the first occurrence of the null-terminated
		string little in the string big, where not more than len characters are
		searched.
		If little is an empty string, big is returned; if
		little occurs nowhere in big, NULL is returned;
		otherwise a pointer to the first character of the
		first occurrence of little is returned.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (j < little_len)
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == little_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//      char *mainstr = "akancha";
//      char *search_str = "nc";
//      char *result;
//      result = ft_strnstr(mainstr, search_str,7);
//      if (result)
//         printf("%s\n", result);
//     else
//         printf("Substring not found\n");

//     return (0);
// }