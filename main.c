/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:12:59 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/24 13:40:35 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int main(int ac, const char **av)
{
	int	*tab;

	if (ac < 2)
		return (ft_putstr_fd("Error\n", 1), 1);
	if (!check_args(ac, av))
		return(ft_putstr_fd("Error\n", 1), 1);
	tab = get_number_tab(ac, av);
	if (!tab)
		return (ft_putstr_fd("Error\n", 1), 1);
	if (!have_double(tab))
		return(ft_putstr_fd("Error\n", 1), 1);
	free(tab);
	return (0);
}
