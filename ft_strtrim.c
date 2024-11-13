/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:52:45 by akumari           #+#    #+#             */
/*   Updated: 2024/11/12 10:27:19 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Trimming means removing the characters specified in the set 
string from the start AND the end of the string s1, without 
removing the characters from the set that are in the middle of s1.
*/
static int	to_trim(char ch, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	i = 0;
	while (to_trim(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (to_trim(s1[j], set))
		j--;
	str = ft_substr(s1, i, (j - (i - 1)));
	return (str);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*str;

// 	s1 = "/t/n     /t/t/n/n/n     /n";
// 	set = " /t/n";
// 	str = ft_strtrim(s1, set);
// 	if (str)
// 		printf("%s\n", str);
// 	else
// 		printf("nothing");
// 	free(str);
// 	return (0);
// }
