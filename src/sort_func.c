/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:11 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/23 12:01:10 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *lst_a)
{
	swap(lst_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list *lst_b)
{
	swap(lst_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list *lst_a, t_list *lst_b)
{
	sa(lst_a);
	sb(lst_b);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_list *lst_a, t_list *lst_b)
{
	push(lst_b, lst_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list *lst_a, t_list *lst_b)
{
	push(lst_a, lst_b);
	ft_putstr_fd("pc\n", 1);
}
