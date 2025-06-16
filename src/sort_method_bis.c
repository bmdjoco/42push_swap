/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_method_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:43:26 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 17:21:57 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Trier les cinqs elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	sort_for_five(t_list **lst_a)
{
	int		i;
	int		emp;
	t_list	**lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return (free_list(lst_a), error_message());
	*lst_b = NULL;
	emp = nb_min(lst_a);
	i = 0;
	while (i < emp)
	{
		ra(lst_a);
		i++;
	}
	pb(lst_a, lst_b);
	sort_for_four(lst_a);
	pa(lst_a, lst_b);
	free_list(lst_b);
}

void	sort_chunk(t_list **lst_a, t_list **lst_b)
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
