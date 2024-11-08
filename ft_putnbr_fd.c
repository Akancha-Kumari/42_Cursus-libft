/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akumari <akumari@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:32:37 by akumari           #+#    #+#             */
/*   Updated: 2024/11/06 14:39:57 by akumari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
		ft_putnbr_fd(n, 1);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
	else
	{
		ft_putchar_fd(n + 48, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-4545, 1);
	return (0);
}
*/