/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <asajed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 21:24:34 by asajed            #+#    #+#             */
/*   Updated: 2025/01/12 20:53:18 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **dest, t_list **src)
{
	t_list	*tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dest;
	*dest = tmp;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_printf("pb\n");
}