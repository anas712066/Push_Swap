/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_partial_median.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:04:02 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/24 20:05:35 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_partial_median(t_stack *a, int part, int total_parts)
{
	int	*values;
	int	size;
	int	median;

	size = a->size / total_parts;
	values = extract_values(a, part * size, size);
	quicksort(values, 0, size - 1);
	median = values[size / 2];
	free(values);
	return (median);
}
