/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:35:54 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/16 22:08:30 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char *str;

    str = (char *)s;
    i = 0;
    while (str[i] != 0)
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}