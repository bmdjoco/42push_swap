/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:43:48 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/23 11:49:55 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *lst_a)
{
	rotate(lst_a);
}

void	rb(t_list *lst_b)
{
	rotate(lst_b);
}

void	rr(t_list *lst_a, t_list *lst_b)
{
	ra(lst_a);
	rb(lst_b);
}

void	rra(t_list *lst_a)
{
	rotate_rev(lst_a);
}

void	rrb(t_list *lst_b)
{
	rotarotate_revte(lst_b);
}
