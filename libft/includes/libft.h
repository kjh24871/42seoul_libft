/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:19:03 by jukoh             #+#    #+#             */
/*   Updated: 2022/03/16 22:07:55 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

size_t     ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
int	    ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
void ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove   (void *dst , const void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);


#endif
