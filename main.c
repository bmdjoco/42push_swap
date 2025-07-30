/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/31 00:16:21 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int ac, const char **av)
{
	t_list	**lst_a;

	if (ac < 2)
		exit(0);
	is_formated(ac, av);
	had_double(ac, av);
	ft_putstr_fd("fill_tab\n", 1);
	lst_a = fill_tab(ac, av);
	ft_putstr_fd("sort(lst_a)\n", 1);
	sort(lst_a);
	free_list(lst_a);
	return (0);
}
