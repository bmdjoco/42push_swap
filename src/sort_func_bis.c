/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:43:48 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/23 15:12:53 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *lst_a)
{
	rotate(lst_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list *lst_b)
{
	rotate(lst_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list *lst_a, t_list *lst_b)
{
	ra(lst_a);
	rb(lst_b);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_list *lst_a)
{
	rotate_rev(lst_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list *lst_b)
{
	rotate_rev(lst_b);
	ft_putstr_fd("rrb\n", 1);
}
