/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:39:51 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/18 17:57:37 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strrchr(const char *s, int c)
{
    int    i;
    char *str;
    char *ret;
    
    str = (char *)s;
    i = 0;
    ret = 0;
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            ret = &str[i];
        i++;
    }
    if (str[i] == '\0' && (char)c == '\0')
        ret = &str[i];
    return (ret);
}