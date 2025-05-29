/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/29 12:52:57 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int main(int ac, char const **av)
{
	if(ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	
	return 0;
}
