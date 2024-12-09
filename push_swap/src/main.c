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

int main(int argc, char **argv)
{
    t_stack stack;
    int i;

    if (argc != 2)
    {
        printf("Usage: %s \"numbers separated by space\"\n", argv[0]);
        return (1);
    }

    stack = fill_array(argv[1]);
    if (!stack.array)
    {
        printf("Error: Failed to allocate memory.\n");
        return (1);
    }

    printf("Stack size: %d\n", stack.size);
    printf("Stack elements:\n");
    for (i = 0; i < stack.size; i++)
        printf("%d\n", stack.array[i]);

    free(stack.array);
    return (0);
}
