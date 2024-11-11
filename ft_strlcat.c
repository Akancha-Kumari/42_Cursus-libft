/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:40 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 15:14:32 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (i < (size - 1) && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (src_len + dst_len);
}

// int	main(void)
// {
// 	char src[] = "akancha";
// 	char dest[] = "kumari";
// 	ft_strlcat(dest, src, 8);
// 	puts(dest);
// 	return (0);
// }

/* The strlcat() function concatenate strings with the same input parameters and
outuput result as	snprintf(3). It is designed to be safer, more consistent,
		and
less error prone replacements for the easily misused function	strncat(3).
	strlcat() take the full size of the destination buffer and guarantee
	NUL-termination if there is room. Note that room for the NUL should be
	included in dstsize. Also note that strlcat() only operate on true ''C''
	strings. This means that both src and dst must be NUL-terminated.
	strlcat() appends string src to the end of dst. It will append at most
	dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in practice
	this should not happen as it means that either dstsize is incorrect or that
	dst is not a proper string).
	If the src and dst strings overlap, the behavior is undefinded.
RETURN VALUES
	Like snprintf(3), strlcat() function return the total length of the string
	it tried to create. That means the initial length of dst plus the length of src.
	If the return value is >= dstsize, the output string has been truncated.*/
