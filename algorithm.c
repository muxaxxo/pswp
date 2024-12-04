/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalegria <aalegria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:55:01 by aalegria          #+#    #+#             */
/*   Updated: 2024/11/22 15:55:39 by aalegria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static int	get_max_bits(t_stack *a)
{
	int	max;
	int	bits;
	int	i;

	max = a->values[0];
	i = 1;
	bits = 0;
	while (i < a->size)
	{
		if (a->values[i] > max)
			max = a->values[i];
		i++;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}


static void	sort_bit(t_stack *a, t_stack *b, int bit)
{
	int	size;
	int	i;

	i = 0;
	size = a->size;
	while (i < size)
	{
		if (((a->values[0] >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	while (b->size > 0)
		pa(a, b);
}

void	push_swap(t_stack *a, t_stack *b)
{
	int	bits;
	int	i;

	bits = get_max_bits(a);
	i = 0;
	while (i < bits)
	{
		sort_bit(a, b, i);
		i++;
	}
}
