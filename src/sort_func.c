/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:11 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/23 11:40:14 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *lst_a)
{
	swap(lst_a);
}

void	sb(t_list *lst_b)
{
	swap(lst_b);
}

void	ss(t_list *lst_a, t_list *lst_b)
{
	sa(lst_a);
	sb(lst_b);
}

void	pa(t_list *lst_a, t_list *lst_b)
{
	push(lst_b, lst_a);
}

void	pb(t_list *lst_a, t_list *lst_b)
{
	push(lst_a, lst_b);
}
