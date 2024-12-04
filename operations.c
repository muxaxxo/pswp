/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalegria <aalegria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:54:12 by aalegria          #+#    #+#             */
/*   Updated: 2024/11/26 13:47:34 by aalegria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size > 1)
	{
		tmp = a->values[0];
		a->values[0] = a->values[1];
		a->values[1] = tmp;
	}
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size > 1)
	{
		tmp = b->values[0];
		b->values[0] = b->values[1];
		b->values[1] = tmp;
	}
}

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i > 0)
	{
		a->values[i] = a->values[i - 1];
		i--;
	}
	if (b->size > 0)
	{
		i = a->size;
		while (i > 0)
		{
			a->values[i] = a->values[i - 1];
			i--;
		}
		a->values[0] = b->values[0];
		while (i < b->size - 1)
		{
			b->values[i] = b->values[i + 1];
			i++;
		}
		a->size++;
		b->size--;
	}
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i > 0)
	{
		b->values[i] = b->values[i - 1];
		i--;
	}
	if (a->size > 0)
	{
		i = b->size;
		while (i > 0)
		{
			b->values[i] = b->values[i - 1];
			i--;
		}
		b->values[0] = a->values[0];
		while (i < a->size - 1)
		{
			a->values[i] = a->values[i + 1];
			i++;
		}
		b->size++;
		a->size--;
	}
}
