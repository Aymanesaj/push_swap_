/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajed <asajed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 23:27:00 by asajed            #+#    #+#             */
/*   Updated: 2025/01/14 13:56:25 by asajed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_min(t_list *lst)
{
	int	min;

	if (!lst)
		return (-1);
	min = lst->num;
	lst = lst->next;
	while (lst)
	{
		if (lst->num < min)
		{
			min = lst->num;
		}
		lst = lst->next;
	}
	return (min);
}

int	ft_find_max(t_list *lst)
{
	int	max;

	if (!lst)
		return (-1);
	max = lst->num;
	lst = lst->next;
	while (lst)
	{
		if (lst->num > max)
		{
			max = lst->num;
		}
		lst = lst->next;
	}
	return (max);
}

int	ft_index(t_list *lst, int min)
{
	int	i;

	if (!lst)
		return (-1);
	i = 0;
	while (lst)
	{
		if (lst->num == min)
			return (i);
		lst = lst->next;
		i++;
	}
	return (i);
}
