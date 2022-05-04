/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:48:10 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 15:26:47 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t		idx;
	size_t		start;
	size_t		end;
	char		*str;

	idx = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end > start)
		end--;
	idx = end - start + 1;
	str = malloc(sizeof(char) * (idx + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], idx + 1);
	return (str);
}
