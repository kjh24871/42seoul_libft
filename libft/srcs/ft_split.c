/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:43:32 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/11 17:41:20 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static unsigned int	word_counter(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c && s[i + 1] != 0 && i != 0)
			count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static void	write_word(char *strs, char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c)
	{
		strs[i] = s[i];
		i++;
	}
	strs[i] = '\0';
}

static void	free_strs(char **strs, unsigned int word_count)
{
	unsigned int	i;

	i = 0;
	while (i != word_count)
	{
		free(strs[i]);
		i++;
	}
}

static void	word_split(char **strs, char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	word_count;

	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count = 0;
			while (s[i + count] && s[i + count] != c)
				count ++;
			strs[word_count] = malloc(sizeof(char) * (count + 1));
			if (!strs[word_count])
				free_strs(strs, word_count);
			write_word(strs[word_count], s + i, c);
			i += count;
			word_count ++;
		}	
	}	
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	char			**strs;
	
	word_count = word_counter(s, c);
	strs = malloc(sizeof(char *) * (word_count + 1));
	if (!strs)
		return (0);
	word_split(strs, s, c);
	strs[word_count] = 0;
	return (strs);
}