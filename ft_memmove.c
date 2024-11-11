/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:14 by akumari           #+#    #+#             */
/*   Updated: 2024/11/11 12:52:14 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	i = 0;
	if (d == s || !n)
		return (dest);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	return (dest);
}

// int main(void)
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char *dest;
// 	dest = src + 1;
// 	char *res;
// 	res = ft_memmove(dest, src, 8);
// 	printf("%s\n", res);
// 	return (0);
// }

/*The  memmove() function copies n bytes from memory area src to memory area
		dest.  The memory areas may overlap: copying takes  place  as  though  the
		bytes in src are first copied into a temporary array that does not overlap
		src or dest,
			and the bytes are then copied from  the  temporary  array  to
		dest.*/
