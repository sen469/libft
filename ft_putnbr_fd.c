/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:12:03 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/26 17:18:44 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_long(long n, int fd)
{
	char	c;

	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	while (n >= 10)
	{
		c = n % 10;
		ft_putnbr_fd_long(n / 10, fd);
		ft_putchar_fd(c, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	ft_putnbr_fd_long(num, fd);
}
