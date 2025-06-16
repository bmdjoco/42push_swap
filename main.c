/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:33:36 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:49:15 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

/*#include <stdio.h>
void	print_lst(t_list **lst)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	printf("List\n");
	while (tmp)
	{
		printf("%d | %d\n", i, tmp->val);
		tmp = tmp->next;
		i++;
	}
}*/
int	main(int ac, const char **av)
{
	t_list	**lst_a;

	if (ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	lst_a = fill_tab(ac, av);
	set_index(*lst_a, ft_lstsize(*lst_a));
	sort(lst_a);
	free_list(lst_a);
	return (0);
}
