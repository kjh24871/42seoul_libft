/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:35:54 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/18 17:36:21 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    int    i;
    char *str;

    str = (char *)s;
    i = 0;
    while (str[i] != (char)c)
    {
        if (str[i] == '\0')
            return (NULL);
        i++;
    }
    return (&str[i]);
}