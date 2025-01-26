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

int	quickselect(int *arr, int left, int right, int k)
{
	int	pivot_index;

	if (left == right)
		return (arr[left]);
	pivot_index = partition(arr, left, right);
	if (k == pivot_index)
		return (arr[k]);
	else if (k < pivot_index)
		return (quickselect(arr, left, pivot_index - 1, k));
	else
		return (quickselect(arr, pivot_index + 1, right, k));
}

int	find_partial_median(t_stack *a, int part, int total_parts)
{
	int	*values;
	int	size;
	int	median;

	size = a->size / total_parts;
	values = extract_values(a, part * size, size);
	if (!values)
		error_exit("Failed to extract values in find_partial_median");
	quicksort(values, 0, size - 1);
	median = quickselect(values, 0, size - 1, size / 2);
	free(values);
	return (median);
}
