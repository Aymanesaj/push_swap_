/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <asajed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:45:32 by asajed            #+#    #+#             */
/*   Updated: 2025/01/12 20:52:18 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_remove(t_list **list, int index)
{
	t_list	*tmp;
	t_list	*next;

	if (!list || !(*list) || index < 0)
		return ;
	tmp = *list;
	while (tmp && index--)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*list = tmp;
}

void	ft_check_double(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*head;

	head = *stack_a;
	if (!head)
		return ;
	while (head)
	{
		tmp = head;
		while (tmp->next)
		{
			if (head->num == tmp->next->num)
			{
				ft_remove(stack_a, ft_lstsize(*stack_a));
				ft_printf("Error\n");
				exit(1);
			}
			tmp = tmp->next;
		}
		head = head->next;
	}
}

void	ft_clean_and_free(t_list **stack_a, t_list **stack_b)
{
	ft_remove(stack_a, ft_lstsize(*stack_a));
	ft_remove(stack_b, ft_lstsize(*stack_b));
	ft_printf("Error\n");
	exit(1);
}