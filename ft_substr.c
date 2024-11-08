/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:06:24 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 13:38:02 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocate (with malloc(3)) and return a new string from the string s.
	This new string starts at index 'start' and has a maximum size of 'len'.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		s_len;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len < s_len - start)
		substr_len = len;
	else
		substr_len = s_len - start;
	new_str = (char *)malloc(substr_len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		new_str[i] = s[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	*str;
	char	*result;

	str = "akancha";
	result = ft_substr(str, 4, 2);
	if(result)
		printf("%s\n", result);
	else
		printf("nothing");
	free(result);
	return (0);
}
*/