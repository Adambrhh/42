/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:29:11 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:31:22 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	fill_stack_a(char *str)
{
	t_stack stack_a;
	char	**args;
	int		i;

	stack_a.array = NULL;
	stack_a.size = 0;
	args = ft_split(str, ' ');
	i = 0;
	while (args[stack_a.size])
		stack_a.size++;
	stack_a.array = malloc(sizeof(int) * stack_a.size);
	if (!stack_a.array)
	{
		while (stack_a.size > 0)
			free(args[--(stack_a.size)]);
		return (free(args), stack_a);
	}
	while (i < stack_a.size)
	{
		stack_a.array[i] = ft_atoi(args[i]);
		free(args[i]);
		i++;
	}
	return(free(args), stack_a);
}

t_stack	make_stack_b(t_stack stack_a)
{
	t_stack	stack_b;

	stack_b.array = NULL;
	stack_b.size = stack_a.size;
	stack_b.array = ft_calloc(stack_a.size, 4);
}
