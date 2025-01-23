/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:27:18 by mumajeed          #+#    #+#             */
/*   Updated: 2025/01/23 11:28:17 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_stack(t_stack *a, t_stack *b)
{
	int	median;
	int	quarter;
	int	size;
}

/*
void sort_stack(t_stack *a, t_stack *b)
{
    int median;
    int quarter;
    int size;
    int pushed;
    int i;
    int j;

    size = a->size;

    // Paso 1: Dividir en cuartos para partición más eficiente
    i = 0;
    while (i < 4)
    {
        median = find_partial_median(a, i, 4); // Encuentra la mediana parcial
        j = 0;
        while (j < size / 4)
        {
            if (a->top->value <= median)
            {
                pb(a, b); // Mover a 'B' si es menor o igual a la mediana parcial
                pushed++;
            }
            else
            {
                ra(a); // Rota 'A' si es mayor
            }
            j++;
        }
        i++;
    }

    // Paso 2: Ordenar 'B' y devolver a 'A'
    while (b->size > 0)
    {
        int max = find_max(b); // Encuentra el valor máximo en 'B'
        bring_to_top(b, max); // Lleva el máximo al tope de 'B'
        pa(a, b); // Mueve de 'B' a 'A'
    }

    // Paso 3: Ordenar 'A' final
    while (!is_sorted(a))
    {
        if (a->top->value > a->top->next->value)
            sa(a);
        else
            ra(a);
    }
}

*/
