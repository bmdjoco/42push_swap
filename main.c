/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:12:59 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/26 11:03:35 by bdjoco           ###   ########.fr       */
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

int main(int ac, const char **av)
{
	int	*tab;
	t_list	*a_lst;

	if (ac < 2)
		return (ft_putstr_fd("Error\n", 2), 1);
	if (!check_args(ac, av))
		return(ft_putstr_fd("Error\n", 2), 1);
	tab = get_number_tab(ac, av);
	if (!tab)
		return (ft_putstr_fd("Error\n", 2), 1);
	if (!have_double(tab))
		return(ft_putstr_fd("Error\n", 2), 1);
	a_lst = fill_number(tab);
	if (!a_lst)
		return (free(tab), 1);
	free(tab);
	print_list(a_lst);
	/*sort(a_lst);
	print_list(a_lst);*/
	ft_lstclear(&a_lst);
	return (0);
}
