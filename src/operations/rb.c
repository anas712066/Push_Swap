/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:18:14 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/22 13:34:17 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rb(t_stack *b)
{
	t_node	*top_node;
	t_node	*last_node;

	if (b->size < 2)
		return ;
	top_node = b->top;
	b->top = top_node->next;
	last_node = b->top;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = top_node;
	top_node->next = NULL;
	ft_printf("rb\n");
}
