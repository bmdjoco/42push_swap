/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:50:44 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/26 10:34:55 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Décale d’une position vers le bas tous les élements de la pile A et b. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 * @param lst_b Pointeur vers la liste chaînée représentant la pile B
 */
void	rrr(t_list *lst_a, t_list *lst_b)
{
	rra(lst_a);
	rrb(lst_b);
	ft_putstr_fd("rrr\n", 1);
}
