/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:51:03 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/16 20:53:16 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    char *ptr;
    unsigned char data;
    size_t i;
    
    ptr = (char *)b;
    data = (unsigned char)c;
    i = 0;
    while (i < len)
    {
        ptr[i] = data;
        i ++;
    }
    return (ptr);
}