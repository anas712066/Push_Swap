/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:40:48 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/22 13:44:28 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_stack *b)
{
	t_node	*prev;
	t_node	*last_node;

	if (b->size < 2)
		return ;
	prev = NULL;
	last_node = b->top;
	while (last_node->next)
	{
		prev = last_node;
		last_node = last_node->next;
	}
	last_node->next = b->top;
	b->top = last_node;
	prev->next = NULL;
	ft_printf("rrb\n");
}
