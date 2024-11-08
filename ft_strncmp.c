/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:56:56 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:57:41 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  strcmp()  function compares the two strings s1 and s2.  The locale is
		not taken into account (for a locale-aware  comparison,
			 see  strcoll(3)).
		The comparison is done using unsigned characters.

		strcmp()  returns  an  integer indicating the result of the comparison,
			as
		follows:

		• 0, if the s1 and s2 are equal;

		• a negative value if s1 is less than s2;

		• a positive value if s1 is greater than s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	int res = ft_strncmp("akanc ha", "akancha", 7);
// 	printf("%d\n", res);
// 	return (0);
// }