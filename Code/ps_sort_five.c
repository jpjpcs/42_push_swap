/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:05:15 by jode-jes          #+#    #+#             */
/*   Updated: 2023/09/21 02:05:27 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_smallest(t_stack_node *stack)
{
	t_stack_node	*smallest;

	smallest = stack;
	while (stack)
	{
		if (stack->value < smallest->value)
			smallest = stack;
		stack = stack->next;
	}
	return (smallest);
}

void	finish_rotation(t_stack_node **stack, t_stack_node *cheap, char *rx, char *rrx)
{
	while (*stack != cheap)
	{
		if (cheap->bottom)
			move(stack, stack, rrx);
		else
			move(stack, stack, rx);
	}
}

void	sort_five(t_stack_node **a, t_stack_node **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_smallest(*a), RA, RRA);
		move(a, b, PB);
	}
}