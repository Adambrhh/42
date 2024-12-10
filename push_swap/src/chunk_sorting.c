/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:35:38 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 11:45:57 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_min_max(t_stack *stack, int *min, int *max)
{
	int	i;

	*min = stack->a[0];
	*max = stack->a[0];
	i = 1;
	while (i < stack->size_a)
	{
		if (stack->a[i] < *min)
			*min = stack->a[i];
		if (stack->a[i] > *max)
			*max = stack->a[i];
		i++;
	}
}

int	get_chunk_size(int size, int chunks)
{
	if (chunks == 0)
		return (0);
	if (size % chunks == 0)
		return (size / chunks);
	return ((size / chunks) + 1);
}

void	push_chunks_to_b(t_stack *stack, int chunks)
{
	int	min;
	int	max;
	int	chunk_size;
	int	i;
	int	j;
	int	chunk_min;
	int	chunk_max;

	get_min_max(stack, &min, &max);
	chunk_size = get_chunk_size(stack->size_a, chunks);
	i = 0;
	while (i < chunks)
	{
		chunk_min = min + i * chunk_size;
		chunk_max = chunk_min + chunk_size;
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->a[0] >= chunk_min && stack->a[0] < chunk_max)
				pb(stack);
			else
				ra(stack);
			j++;
		}
		i++;
	}
}

int	find_max_index(int *arr, int size)
{
	int	i;
	int	max;
	int	max_index;

	max = arr[0];
	max_index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
		i++;
	}
	return (max_index);
}

void	sort_b_to_a(t_stack *stack)
{
	int	max_index;

	while (stack->size_b > 0)
	{
		max_index = find_max_index(stack->b, stack->size_b);
		if (max_index <= stack->size_b / 2)
		{
			while (max_index > 0)
			{
				rb(stack);
				max_index--;
			}
		}
		else
		{
			while (max_index < stack->size_b)
			{
				rrb(stack);
				max_index++;
			}
		}
		pa(stack);
	}
}
