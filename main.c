/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/27 12:58:42 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int ac, const char **av)
{
	t_list	**lst_a;

	if (ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	lst_a = fill_tab(ac, av);
	sort(lst_a);
	free_list(lst_a);
	return (0);
}
