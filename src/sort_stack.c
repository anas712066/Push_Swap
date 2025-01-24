/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:27:18 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/24 19:50:28 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_quarters_to_b(t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	median;

	i = 0;
	while (i < 4)
	{
		median = find_partial_median(a, i, 4);
		j = 0;
		while (j < size / 4 && a->size > 0)
		{
			if (a->top->value <= median)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		i++;
	}
}

static void	bring_b_to_a(t_stack *a, t_stack *b)
{
	int	max;

	while (b->size > 0)
	{
		max = find_max(b);
		bring_to_top(b, max);
		pa(a, b);
	}
}

static void	final_sort_a(t_stack *a)
{
	while (!is_sorted(a))
	{
		if (a->top->value > a->top->next->value)
			sa(a);
		else
			ra(a);
	}
}

void	sort_stack(t_stack *a, t_stack *b)
{
	int	size;

	size = a->size;
	push_quarters_to_b(a, b, size);
	bring_b_to_a(a, b);
	final_sort_a(a);
}
