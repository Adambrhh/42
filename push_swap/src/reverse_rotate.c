/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:33 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 17:44:50 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	rra(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->a[stack->size_a - 1];
	i = stack->size_a - 1;
	if (stack->size_a < 2)
		return ;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	temp;
	int	i;

	temp = stack->b[stack->size_b - 1];
	i = stack->size_b - 1;
	if (stack->size_b < 2)
		return ;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->a[0] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
	ft_printf("rrr\n");
}
