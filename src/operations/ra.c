/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:14:55 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/21 12:17:51 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *a)
{
	t_node	*top_node;
	t_node	*top_node;

	if (a->size < 2)
		return ;
	top_node = a->top;
	a->top = top_node->next;
	last_node = a->top;
	while (last__node->next)
		last_node = last_node->next;
	last_node->next = top_node;
	top_node->next = NULL;
	ft_printf("ra\n");
}
