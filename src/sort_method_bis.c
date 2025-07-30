/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_method_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:43:26 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/30 22:48:18 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min_index(t_list *lst)
{
	int	index;
	int	min;
	int	i;

	index = 0;
	min = lst->val;
	i = 0;
	while (lst)
	{
		if (lst->val < min)
		{
			min = lst->val;
			index = i;
		}
		i++;
		lst = lst->next;
	}
	return (index);
}

void	short_chunk(t_list **lst_a, t_list **lst_b)
{
	int	index;
	int	size;

	(void) index;
	while (ft_lstsize(*lst_a) > 3)
	{
		index = get_min_index(*lst_a);
		size = ft_lstsize(*lst_a);
		rotate_to_min(lst_a, get_min_index(*lst_a), size);
		pb(lst_a, lst_b);
	}
	sort_for_tree(lst_a);
	while (*lst_b)
		pa(lst_a, lst_b);
}

void	big_chunk(t_list **lst_a, t_list **lst_b)
{
	int	size;
	int	chunk_size;
	int	min;
	int	max;

	size = ft_lstsize(*lst_a);
	chunk_size = size / get_chunk_count(size);
	min = 0;
	max = chunk_size;
	while (min < size)
	{
		push_chunk(lst_a, lst_b, min, max);
		min = max;
		max += chunk_size;
	}
	push_back(lst_a, lst_b);
}

void	push_chunk(t_list **lst_a, t_list **lst_b, int min, int max)
{
	int	pos;
	int	mid;

	mid = (min + max) / 2;
	while (exists_in_range(*lst_a, min, max))
	{
		pos = find_pos_in_range(*lst_a, min, max);
		if (pos <= ft_lstsize(*lst_a) / 2)
			while (pos-- > 0)
				ra(lst_a);
		else
			while (pos++ < ft_lstsize(*lst_a))
				rra(lst_a);
		if ((*lst_a)->val < mid)
		{
			pb(lst_a, lst_b);
			rb(lst_b);
		}
		else
			pb(lst_a, lst_b);
	}
}

void	sort_chunk(t_list **lst_a, t_list **lst_b)
{
	int	size;

	size = ft_lstsize(*lst_a);
	if (size <= 20)
		short_chunk(lst_a, lst_b);
	else
		big_chunk(lst_a, lst_b);
}
