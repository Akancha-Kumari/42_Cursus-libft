/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:55:39 by akumari           #+#    #+#             */
/*   Updated: 2024/11/08 10:58:01 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 56))
		return (1);
	return (0);
}
// int main(void)
// {
// 	int val = ft_isdigit(-1);
// 	printf("%d\n", val);
// 	return (0);
// }