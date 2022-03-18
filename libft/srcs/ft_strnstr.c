/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:42:14 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/18 18:59:27 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haycheck, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*str2;

	str = (char *)haycheck;
	str2 = (char *)needle;
	i = 0;
	if (str2[0] == '\0')
		return (str);
	while (i < len)
	{
		j = 0;
		while (i + j < len && str[i + j] == str2[j])
		{
			if (str2[j + 1] == '\0')
				return (&str[i]);
			j ++;
		}
		i ++;
	}
	return (0);
}