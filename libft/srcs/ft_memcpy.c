/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:06:49 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:39:16 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t	i;
	char	*str;
	char	*str1;

	str = (char *)dst;
	str1 = (char *)src;
	if (!str1 && !str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (str);
}
