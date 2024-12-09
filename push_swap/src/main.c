/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:50:27 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:31:28 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack;

	i = 0;
	if (argc != 2)
		return (ft_printf("\n"), 1);
	stack = init_stack(1000);
	if (!stack)
		return (ft_printf("\n"), 1);
	if (!fill_stack(stack, argv[1]))
		return (free_stack(stack), 1);
	if (is_sorted(stack))
		return (free_stack(stack), 0);
	ft_printf("Stack A:\n");
	while (i < stack->size_a)
	{
		ft_printf("%d\n", stack->a[i]);
		i++;
	}
	free_stack(stack);
	return (0);
}
