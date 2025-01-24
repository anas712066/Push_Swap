/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bring_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:06:47 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/24 20:09:27 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	bring_to_top(t_stack *stack, int value)
{
	int	pos;
	int	mid;

	pos = find_position(stack, value);
	mid = stack->size / 2;
	if (pos <= mid)
	{
		while (pos-- > 0)
			ra(stack);
	}
	else
	{
		while (pos++ < stack->size)
			rra(stack);
	}
}
