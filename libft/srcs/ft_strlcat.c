/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:28:30 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:33:54 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	j;

	j = 0;
	dest_size = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size ++;
	while (dest[dest_size] != '\0')
		dest_size ++;
	if (dest_size >= size)
		return (size + src_size);
	while (dest_size + j < size - 1 && src[j] != '\0')
	{
		dest[dest_size + j] = src[j];
		j ++;
	}
	dest[dest_size + j] = '\0';
	return (dest_size + src_size);
}
