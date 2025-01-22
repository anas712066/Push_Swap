/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:35:48 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/22 13:40:39 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *a)
{
	t_node	*prev;
	t_node	*last_node;

	if (a->size < 2)
		return ;
	prev = NULL;
	last_node = a->top;
	while (last_node->next)
	{
		prev = last_node;
		last_node = last_node->next;
	}
	last_node->next = a->top;
	a->top = last_node;
	prev->next = NULL;
	ft_printf("rra\n");
}
