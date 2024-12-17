/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalegria <aalegria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:12 by aalegria          #+#    #+#             */
/*   Updated: 2024/12/16 14:22:11 by aalegria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (a->size > 1)
		swap(a);
	increment_move_count(0);
}

void	sb(t_stack *b)
{
	if (b->size > 1)
		swap(b);
	increment_move_count(0);
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->size > 0)
		push(a, b);
	increment_move_count(0);
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->size > 0)
		push(b, a);
	increment_move_count(0);
}
