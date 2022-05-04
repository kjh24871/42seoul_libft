/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:52:28 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:45:37 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*ptr;
	unsigned char	zero;

	i = 0;
	ptr = (char *)s;
	zero = 0;
	while (i < n)
	{
		ptr[i] = zero;
		i ++;
	}
}
