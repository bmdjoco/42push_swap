/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:12:59 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/27 20:48:03 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	print_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_putstr_fd("| ", 1);
		ft_putnbr_fd(tmp->val, 1);
		ft_putstr_fd("\n", 1);
		tmp = tmp->next;
	}
}

#include <stdio.h>

int main(int ac, const char **av)
{
	check_args(ac, av);
	printf("It work");

	return (0);
}
