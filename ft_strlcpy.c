/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:46 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 11:03:42 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strlcpy() and strlcat() functions copy and concatenate strings respec‐
		tively.  They are designed to be safer, more consistent, and less error
		prone replacements for strncpy(3) and strncat(3).
		The strlcpy() function copies up to size
			- 1 characters from the NUL-termi‐
		nated string src to dst, NUL-terminating the result.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL || src == NULL)
		return (0);
	i = strlen(src);
	if (size == 0)
		return (i);
	while ((j < (size - 1)) && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char src[] = "akancha";
// 	char dest[] = "kumari";
// 	ft_strlcpy(dest, src, 8);
// 	puts(dest);
// 	return (0);
// }