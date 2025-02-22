/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliberal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:15:20 by cefelix           #+#    #+#             */
/*   Updated: 2024/10/08 18:02:49 by aliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_b(t_node **a, t_node **b)
{
	t_node	*top;

	if (*a == NULL)
		return ;
	top = ft_stack_get_top(*a);
	*a = (*a)->next;
	top->next = *b;
	*b = top;
	ft_printf("pb\n");
}

void	ft_push_a(t_node **a, t_node **b)
{
	t_node	*top;

	if (*b == NULL)
		return ;
	top = ft_stack_get_top(*b);
	*b = (*b)->next;
	top->next = *a;
	*a = top;
	ft_printf("pa\n");
}
