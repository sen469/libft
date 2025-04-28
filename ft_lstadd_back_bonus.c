/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:57:54 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/27 16:34:38 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new_node)
{
	if (*lst == NULL)
	{
		*lst = new_node;
	}
	else
	{
		while ((*lst)->next)
		{
			(*lst) = (*lst)->next;
		}
		(*lst)-> next = new_node;
	}
	new_node->next = NULL;
}
