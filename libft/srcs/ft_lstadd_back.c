/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukoh <jukoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:03 by jukoh             #+#    #+#             */
/*   Updated: 2022/04/13 17:40:59 by jukoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst) && !new)
		return ;
	else if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	else
	{
		while ((*lst) -> next != NULL)
		{
			(*lst) = (*lst) -> next;
		}
		(*lst) -> next = new;
		new -> next = NULL;
	}
}