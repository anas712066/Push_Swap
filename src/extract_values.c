/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:16:23 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/24 20:24:19 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*extract_values(t_stack *a, int start, int size)
{
	int		*values;
	t_node	*current;
	int		i;

	values = malloc(sizeof(int) * size);
	if (!values)
		error_exit("Memory allocation failed");
	current = a->top;
	i = 0;
	while (i < start && current)
	{
		current = current->next;
		i++;
	}
	i = 0;
	while (i < size && current)
	{
		values[i] = current->value;
		current = current->next;
		i++;
	}
	return (values);
}
