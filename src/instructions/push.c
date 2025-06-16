/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:10:29 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:22:38 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = NULL;
	if (!*dest)
		*dest = tmp;
	else
		ft_lstadd_front(dest, tmp);
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
