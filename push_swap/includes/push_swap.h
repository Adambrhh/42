/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:19:22 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/09 14:16:50 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483647
# endif

# include <stdlib.h>
# include <unistd.h>
# include "../printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	capacity;
}	t_stack;

t_stack	*init_stack(int capacity);
int		fill_stack(t_stack *stack, char *str);
void	free_split(char **split);

///////////////// UTILS /////////////////

void	free_split(char **split);
int		dup(int *arr, int size, int num);
void	free_stack(t_stack *stack);
int		is_sorted(t_stack *stack);

///////////////// PUSH /////////////////

void	pa(t_stack *stack);
void	pb(t_stack *stack);

//////////// REVERSE_ROTATE ////////////

void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

//////////////// ROTATE ////////////////

void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);

///////////////// SWAP /////////////////

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

#endif
