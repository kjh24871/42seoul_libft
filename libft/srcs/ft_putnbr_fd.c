/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:33:57 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:35:59 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_positive(int n, int fd);
void		ft_putnbr(int nb);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= 0)
		ft_positive(n, fd);
	else
	{
		write(fd, "-", 1);
		n *= -1;
		ft_positive(n, fd);
	}
}

static void	ft_positive(int n, int fd)
{
	int		quo;
	int		reminder;
	char	putchar[15];
	int		count;
	char	rev_putchar[15];

	count = 0;
	while (n / 10 != 0)
	{
		quo = n / 10;
		reminder = n % 10;
		putchar[count] = reminder + '0';
		count += 1;
		n = quo;
	}
	putchar[count] = n + '0';
	count += 1;
	n = 0;
	while (n < count)
	{
		rev_putchar[n] = putchar[count - n - 1];
		n++;
	}
	write(fd, rev_putchar, count);
}
