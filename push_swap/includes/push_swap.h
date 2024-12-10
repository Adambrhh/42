/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:19:22 by abarahho          #+#    #+#             */
/*   Updated: 2024/12/10 17:14:57 by abarahho         ###   ########.fr       */
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
# include "../libft/libft.h"
# include "../libft/ft_printf.h"

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
int		idp(int *arr, int size, int num);
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

///////////////// ALGO /////////////////

void	push_swap(t_stack *stack);
void	sort_b_to_a(t_stack *stack);
int		find_max_index(int *arr, int size);
void	push_chunks_to_b(t_stack *stack, int chunks);
int		get_chunk_size(int size, int chunks);
void	get_min_max(t_stack *stack, int *min, int *max);

#endif
