/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:57:12 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/27 15:19:24 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_pos(t_list *lst)
{
	int	max;
	int	pos;
	int	i;

	if (!lst)
		return (0);
	max = lst->val;
	pos = 0;
	i = 0;
	while (lst)
	{
		if (lst->val > max)
		{
			max = lst->val;
			pos = i;
		}
		lst = lst->next;
		i++;
	}
	return (pos);
}

void	push_back(t_list **lst_a, t_list **lst_b)
{
	int	pos;

	while (*lst_b)
	{
		pos = find_max_pos(*lst_b);
		if (pos <= ft_lstsize(*lst_b) / 2)
			while (pos-- > 0)
				rb(lst_b);
		else
			while (pos++ < ft_lstsize(*lst_b))
				rrb(lst_b);
		pa(lst_a, lst_b);
	}
}

int	exists_in_range(t_list *lst, int min, int max)
{
	while (lst)
	{
		if (lst->val >= min && lst->val < max)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	find_pos_in_range(t_list *lst, int min, int max)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->val >= min && lst->val < max)
			return (i);
		lst = lst->next;
		i++;
	}
	return (0);
}

void	fill_int_tab(t_list	*tmp, int *tab)
{
	int	i;

	i = 0;
	while (tmp)
	{
		tab[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
}
