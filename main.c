/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalegria <aalegria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:41:03 by aalegria          #+#    #+#             */
/*   Updated: 2024/12/04 14:21:39 by aalegria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	b.values = NULL;
	b.size = 0;
	if (argc < 2)
		return (0);
	if (!parse_args(argc, argv, &a))
		return (0);
	b.values = malloc(sizeof(int) * a.size);
	if (!b.values)
		handle_error();
	if (is_sorted(&a))
	{
		free_stack(&a);
		free_stack(&b);
		return (0);
	}
	push_swap(&a, &b);
	print_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
