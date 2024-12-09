/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:51:42 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:41:17 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_s(t_stack **stack)
{
	
}

void	sa(t_stack **stack_a)
{
	ft_s(stack_a);
	ft_printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	ft_s(stack_b);
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_s(stack_a);
	ft_s(stack_b);
	ft_printf("ss\n");
}

