/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalegria <aalegria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:41:59 by aalegria          #+#    #+#             */
/*   Updated: 2024/12/04 14:22:20 by aalegria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	if (a->size <= 0)
		return (1);
	i = 0;
	while (i < a->size - 1)
	{
		if (a->values[i] > a->values[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	free_stack(t_stack *stack)
{
	if (stack->values)
	{
		free(stack->values);
		stack->values = NULL;
	}
	stack->size = 0;
}

void	print_stack_recursive(int *values, int size)
{
	if (size > 0)
	{
		ft_printf("%d ", values[0]);
		print_stack_recursive(values + 1, size - 1);
	}
}

void	print_stack(t_stack *a, t_stack *b)
{
	ft_printf("Stack A: ");
	print_stack_recursive(a->values, a->size);
	ft_printf("\n");
	ft_printf("Stack B: ");
	print_stack_recursive(b->values, b->size);
	ft_printf("\n");
}
