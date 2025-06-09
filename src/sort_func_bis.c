/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:43:48 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/09 19:46:39 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Décale d’une position vers le haut tous les élements de la pile A. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	ra(t_list *lst_a)
{
	rotate(lst_a);
	ft_putstr_fd("ra\n", 1);
}

/**
 * @brief Décale d’une position vers le haut tous les élements de la pile b. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	rb(t_list *lst_b)
{
	rotate(lst_b);
	ft_putstr_fd("rb\n", 1);
}
/**
 * @brief Décale d’une position vers le haut tous les élements de la pile A et b. Le premier élément devient le dernier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rr(t_list *lst_a, t_list *lst_b)
{
	ra(lst_a);
	rb(lst_b);
	ft_putstr_fd("rr\n", 1);
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la pile A. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	rra(t_list **lst_a)
{
	rotate_rev(lst_a);
	ft_putstr_fd("rra\n", 1);
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la pile b. Le dernier élément devient le premier.
 *
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rrb(t_list **lst_b)
{
	rotate_rev(lst_b);
	ft_putstr_fd("rrb\n", 1);
}
