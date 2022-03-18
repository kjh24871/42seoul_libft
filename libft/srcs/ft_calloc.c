/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:25:21 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/18 21:20:01 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	
	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	else
	{
		ft_bzero(arr, count * size);
	}
	
	return (arr);
}