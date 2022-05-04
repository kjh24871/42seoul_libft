/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:23:18 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:33:42 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	j;

	j = 0;
	count = 0;
	while (src[j] != '\0')
		j ++;
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (j);
	while (count + 1 < size && src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	dest[count] = '\0';
	return (j);
}
