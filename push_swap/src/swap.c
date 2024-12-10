/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:42 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 17:44:20 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->size_a < 2)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->size_b < 2)
		return ;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
	ft_printf("ss\n");
}
