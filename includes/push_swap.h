/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:36:14 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/24 20:24:07 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/includes/ft_printf.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}	t_stack;

void	error_exit(const char *message);
t_stack	*init_stack(void);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
int		is_sorted(t_stack *stack);
void	sort_stack(t_stack *a, t_stack *b);
void	clear_stack(t_stack *stack);
int		parse_arguments(t_stack *a, int argc, char **argv);
void	clear_node(t_node *node, void (*del)(void*));
int		find_partial_median(t_stack *a, int part, int total_parts);
int		find_max(t_stack *stack);
void	bring_to_top(t_stack *stack, int value);
void	swap(int *a, int *b);
int		partition(int *arr, int low, int high);
void	quicksort(int *arr, int low, int high);
int		*extract_values(t_stack *a, int start, int size);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
