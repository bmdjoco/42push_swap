/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:12:59 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/21 15:27:10 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int main(int ac, char const *av[])
{
	t_list	nb_lst;
	char	**str_lst;
	int		i;

	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		str_lst = ft_split(av[1], ' ');
		if (!str_lst)
			return (1);
		i = 0;
		while (!str_lst[i])
		{
			/* code */
		}

	}
	return (0);
}
