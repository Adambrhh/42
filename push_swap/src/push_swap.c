/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:29:11 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 17:45:02 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"

t_stack	*init_stack(int capacity)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->a = malloc(sizeof(int) * capacity);
	stack->b = malloc(sizeof(int) * capacity);
	if (!stack->a || !stack->b)
	{
		free(stack->a);
		free(stack->b);
		free(stack);
		return (NULL);
	}
	stack->size_a = 0;
	stack->size_b = 0;
	stack->capacity = capacity;
	return (stack);
}

int	fill_stack(t_stack *stack, char *str)
{
	char	**numbers;
	int		num;
	int		i;

	i = 0;
	numbers = ft_split(str, ' ');
	
	if (!numbers)
		return (0);
	while (numbers[i])
	{
		num = ft_atoi(numbers[i]);
		if (num < INT_MIN || num > INT_MAX || idp(stack->a, stack->size_a, num))
		{
			ft_printf("Error\n");
			free_split(numbers);
			return (0);
		}
		stack->a[stack->size_a] = num;
		stack->size_a++;
		i++;
	}
	free_split(numbers);
	return (1);
}

void	push_swap(t_stack *stack)
{
	int	chunks;

	if (is_sorted(stack))
		return ;
	if (stack->size_a <= 100)
		chunks = 5;
	else
		chunks = 11;
	push_chunks_to_b(stack, chunks);
	sort_b_to_a(stack);
}
