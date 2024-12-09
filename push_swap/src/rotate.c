/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:40 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:44:32 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->a[0];
	i = 0;
	if (stack->size_a < 2)
		return ;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->size_a - 1] = temp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->b[0];
	i = 0;
	if (stack->size_b < 2)
		return ;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->size_b - 1] = temp;
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
	ft_printf("rr\n");
}
