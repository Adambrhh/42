/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:26:45 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:30:59 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(t_stack *stack_a)
{
	int	i;

	i = 1;
	while (i < stack_a->size)
	{
		if (stack_a->array[i - 1] > stack_a->array[i])
			return (0);
		i++;
	}
	return (1);
}