/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:11 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/01 19:25:52 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
 * @brief Intervertit les 2 premiers éléments au sommet de la pile A et de la pile b
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 *
 * @note Ne fait rien s’il n’y en A qu’un ou aucun.
 */
void	ss(t_list *lst_a, t_list *lst_b)
{
	sa(lst_a);
	sb(lst_b);
	ft_putstr_fd("ss\n", 1);
}

/**
 * @brief Prend le premier élément au sommet de b et le met sur A
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 *
 * @note Ne fait rien si b est vide.
 */
void	pa(t_list **lst_a, t_list **lst_b)
{
	push(lst_b, lst_a);
	ft_putstr_fd("pa\n", 1);
}

/**
 * @brief Prend le premier élément au sommet de A et le met sur b
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 *
 * @note Ne fait rien si b est vide.
 */
void	pb(t_list **lst_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	ft_putstr_fd("pb\n", 1);
}
