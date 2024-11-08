/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:05 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:56 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*The  memcpy()  function  copies  n bytes from memory area src to memory
		area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
		memory areas do overlap*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	s = src;
	d = dest;
	if (d == NULL || s == NULL)
		return (dest);
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dest);
}

// int main(void)
// {
// 	char src[] = "hhhhh";
// 	char dest[] = "textme";
// 	char *res;
// 	res = ft_memcpy(dest, src, 2);
// 	printf("%s\n", res);
//  }