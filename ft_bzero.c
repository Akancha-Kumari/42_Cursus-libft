/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:11 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:58:06 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  bzero()  function  erases  the  data  in the n bytes of the memory
		starting at the location pointed to by s, by writing zeros (bytes  con‐
		taining '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		*(str + i) = 0;
		i++;
	}
}

// int main(void)
// {
// 	char	buffer[13] = "AkanchaKumari";
// 	int		i;

// 	ft_bzero(buffer, 8);
// 	i = 0;
// 	while(i <= 13)
// 	{
// 		printf("%d\t", buffer[i]);
// 		i++;
// 	}
// 	return (0);
// }
