/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/11 14:11:53 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"
#include <stdio.h>

void	print_lst(t_list **lst)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	printf("size plst %d\n", ft_lstsize(*lst));
	while (tmp)
	{
		printf("%0.2d | %d\n", i, tmp->val);
		tmp = tmp->next;
	}
}

int main(int ac, const char **av)
{
	t_list	**lst_a;

	if(ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	lst_a = fill_tab(ac, av);
	print_lst(lst_a);
	sort(lst_a);
	print_lst(lst_a);
	free_list(lst_a);
	return 0;
}
