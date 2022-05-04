/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:08:06 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:40:21 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	data;
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	data = (unsigned char)c;
	while (i < n - 1)
	{
		if (str[i] == data)
			return (&str[i]);
		i++;
	}
	if (data == '\0')
		return (&str[i]);
	return (NULL);
}
