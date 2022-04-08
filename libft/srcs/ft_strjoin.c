/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:47:03 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/08 17:46:59 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1_length;
	unsigned int	s2_length;
	char			*str;
	unsigned int	i;

	i = 0;
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (!str)
		return (NULL);
	while (i != s1_length)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i != s2_length)
	{
		str[s1_length + i] = s2[i];
		i++;
	}
	str[s1_length + s2_length] = '\0';
	return (str);
}