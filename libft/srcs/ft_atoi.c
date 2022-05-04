/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:11:26 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:53:26 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	unsigned long	sum;

	sum = 0;
	i = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negative *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (sum > LLONG_MAX -1 && negative == 1)
			return (-1);
		else if (sum > LLONG_MAX && negative == -1)
			return (0);
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	return (sum * negative);
}
