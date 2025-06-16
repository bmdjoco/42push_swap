/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:14:43 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:30:16 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

/**
 * @brief Décale d’une position vers le bas tous les élements de la
 * pile donne. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers une liste chaînée
 */
void	rotate_rev(t_list **lst)
{
	t_list	*prev;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	prev = NULL;
	last = *lst;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *lst;
	*lst = last;
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la
 * pile A. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	rra(t_list **lst_a)
{
	rotate_rev(lst_a);
	ft_putstr_fd("rra\n", 1);
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la
 * pile b. Le dernier élément devient le premier.
 *
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rrb(t_list **lst_b)
{
	rotate_rev(lst_b);
	ft_putstr_fd("rrb\n", 1);
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la
 * pile A et b. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rrr(t_list **lst_a, t_list **lst_b)
{
	rra(lst_a);
	rrb(lst_b);
	ft_putstr_fd("rrr\n", 1);
}
