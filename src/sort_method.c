/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_method.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:43:26 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/01 19:26:52 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Trier les deux elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
static void	sort_for_two(t_list *lst_a)
{
	if (lst_a->val > lst_a->next->val)
		sa(lst_a);
}

/**
 * @brief Trier les trois elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
static void	sort_for_tree(t_list *lst_a)
{
	t_list *lst_b;

	lst_b = NULL;
	if (lst_a->next->val < lst_a->val)
		sa(lst_a);
	if (ft_lstlast(lst_a)->val < lst_a->val)
		rra(lst_a);
	if (ft_lstlast(lst_a)->val < lst_a->next->val)
	{
		pb(&lst_a, &lst_b);
		sa(lst_a);
		pa(&lst_a, &lst_b);
	}
}

void	sort(t_list	*lst_a)
{
	int	l;

	l = ft_lstsize(lst_a);
	if (l == 2)
		sort_for_two(lst_a);
	if (l == 3)
		sort_for_tree(lst_a);
}
