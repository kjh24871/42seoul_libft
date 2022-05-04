/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:21:24 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:34:32 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*new_src;

	i = 0;
	len = 0;
	while (src[i] != '\0')
		i ++;
	new_src = (char *)malloc(sizeof(char) * i + 1);
	if (!(new_src))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		new_src[i] = src[i];
		i ++;
	}
	new_src[i] = '\0';
	return (new_src);
}
