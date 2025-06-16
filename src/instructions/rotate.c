/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:13:32 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 16:58:56 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * @brief Décale d’une position vers le haut tous les élements de la
 * pile donne. Le premier élément devient le dernier.
 *
 * @param lst Pointeur vers une liste chaînée
 */
void	rotate(t_list **lst)
{
	t_list	*tmp;

	if (!lst || ft_lstsize(*lst) == 1)
		return ;
	tmp = *lst;
	tmp = ft_lstlast(tmp);
	tmp->next = ft_lstnew((*lst)->val);
	tmp = (*lst)->next;
	free(*lst);
	*lst = tmp;
}

/**
 * @brief Décale d’une position vers le haut tous les élements de la
 * pile A. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	ra(t_list **lst_a)
{
	rotate(lst_a);
	ft_putstr_fd("ra\n", 1);
}

/**
 * @brief Décale d’une position vers le haut tous les élements
 * de la pile b. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	rb(t_list **lst_b)
{
	rotate(lst_b);
	ft_putstr_fd("rb\n", 1);
}

/**
 * @brief Décale d’une position vers le haut tous les élements de la
 * pile A et b. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rr(t_list **lst_a, t_list **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
	ft_putstr_fd("rr\n", 1);
}
