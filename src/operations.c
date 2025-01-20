/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:25:47 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/20 13:00:31 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *a)
{
	int	temp;

	if (a->size < 2)
		return ;
	temp = aa->top->value;
	a->top->value = a->top->next->value;
	a->top->next->value = tempp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size < 2)
		return ;
	temp = b->top->value;
	b->top->value = b->top->next->value;
	b->top->next->value = temp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->size > 0)
	{
		
	}
}
