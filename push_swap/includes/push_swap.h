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

# include <stdlib.h>
# include <unistd.h>
# include "../printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int					*array;
	int					size;
}						t_stack;

t_stack fill_stack_a(char *str);
t_stack	make_stack_b(t_stack stack_a);


# endif