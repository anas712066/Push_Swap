/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:16:03 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/19 20:44:19 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		error_exit("Memory allocation failed");
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

void	push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node == (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		error_exit("Memory allocation failed");
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (stack->size <= 1)
		return (1);
	current = stack->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	while (!is_sorted(a))
	{
		if (a->top->value > a->top->next->value)
			sa(a);
		else
			pb(a, b);
	}
	while (b->size > 0)
		pa(a, b);
}
