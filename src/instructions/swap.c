/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:12:00 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:29:47 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_list *lst)
{
	int		val;
	t_list	*nlst;

	if (!lst || ft_lstsize(lst) < 2)
		return ;
	else
	{
		nlst = lst->next;
		val = lst->val;
		lst->val = nlst->val;
		nlst->val = val;
	}
}

/**
 * @brief Intervertit les 2 premiers éléments au sommet de la pile A
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 *
 * @note Ne fait rien s’il n’y en A qu’un ou aucun.
 */
void	sa(t_list *lst_a)
{
	swap(lst_a);
	ft_putstr_fd("sa\n", 1);
}

/**
 * @brief Intervertit les 2 premiers éléments au sommet de la pile b
 *
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 *
 * @note Ne fait rien s’il n’y en A qu’un ou aucun.
 */
void	sb(t_list *lst_b)
{
	swap(lst_b);
	ft_putstr_fd("sb\n", 1);
}

/**
 * @brief Intervertit les 2 premiers éléments au sommet de la pile A
 * et de la pile b
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 *
 * @note Ne fait rien s’il n’y en A qu’un ou aucun.
 */
void	ss(t_list *lst_a, t_list *lst_b)
{
	swap(lst_a);
	swap(lst_b);
	ft_putstr_fd("ss\n", 1);
}
