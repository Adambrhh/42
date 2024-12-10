/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:50:27 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 18:00:10 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc != 2)
		return (1);
	stack = init_stack(1000);
	if (!stack)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (!fill_stack(stack, argv[1]))
	{
		free_stack(stack);
		ft_printf("Error\n");
		return (1);
	}
	if (!is_sorted(stack))
		push_swap(stack);
	free_stack(stack);
	return (0);
}

