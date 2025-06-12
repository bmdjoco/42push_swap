/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_method.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:43:26 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/12 19:34:17 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Trier les deux elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
static void	sort_for_two(t_list **lst_a)
{
	if ((*lst_a)->val > (*lst_a)->next->val)
		sa(*lst_a);
}

/**
 * @brief Trier les trois elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
static void	sort_for_tree(t_list **lst_a)
{
	t_list **lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return(free_list(lst_a), error_message());
	*lst_b = NULL;
	if ((*lst_a)->val > (*lst_a)->next->val
		&& (*lst_a)->next->val < ft_lstlast(*lst_a)->val)
		ra(lst_a);
	if ((*lst_a)->next->val < (*lst_a)->val)
		sa(*lst_a);
	if (ft_lstlast(*lst_a)->val < (*lst_a)->val)
		rra(lst_a);
	if (ft_lstlast(*lst_a)->val < (*lst_a)->next->val)
	{
		pb(lst_a, lst_b);
		sa(*lst_a);
		pa(lst_a, lst_b);
	}
	free_list(lst_b);
}

static void	sort_for_four_end(t_list **lst_a, t_list **lst_b, int emp)
{
	if (emp == 2)
	{
		ra(lst_a);
		sa(*lst_a);
		pb(lst_a, lst_b);
	}
	else if (emp == 3)
	{
		rra(lst_a);
		pb(lst_a, lst_b);
	}
}

/**
 * @brief Trier les quatres elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	sort_for_four(t_list **lst_a)
{
	int	emp;
	t_list **lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return(free_list(lst_a), error_message());
	*lst_b = NULL;
	emp = nb_min(lst_a);
	if (emp == 0)
		pb(lst_a, lst_b);
	else if (emp == 1)
	{
		sa(*lst_a);
		pb(lst_a, lst_b);
	}
	sort_for_four_end(lst_a, lst_b, emp);
	sort_for_tree(lst_a);
	pa(lst_a, lst_b);
	free_list(lst_b);
}

/**
 * @brief Trier la liste donne en parametre dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	sort(t_list	**lst_a)
{
	int	l;

	l = ft_lstsize(*lst_a);
	if (l == 2)
		sort_for_two(lst_a);
	else if (l == 3)
		sort_for_tree(lst_a);
	else if (l == 4)
		sort_for_four(lst_a);
	else if (l == 5)
		sort_for_five(lst_a);
}
