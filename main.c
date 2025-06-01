/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/31 15:15:39 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>

int main(int ac, const char **av)
{
	t_list	*lst_a;

	if(ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	lst_a = fill_tab(ac, av);
	sort(lst_a);
	printf("Success\n");
	free_list(&lst_a);
	return 0;
}
