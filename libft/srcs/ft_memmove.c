/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:54:26 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/16 21:12:43 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove   (void *dst , const void *src, size_t len)
{
    unsigned char    data;
    char            *str;
    char            *str1;
    size_t          i;
    
    i = 0;
    str = (char *)dst;
    str1 = (char *)src;
    if (!str && !str1)
        return (NULL);
    while (i < len)
    {
        data = (unsigned char)str1[i];
        str[i] = data;
        i ++;
    }
    return (str);
}