/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:12:59 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/22 14:46:35 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int main(int ac, char const *av[])
{
	t_list	*nb_lst;
	t_list	*tmp;
	char	**str_lst;
	int		i;

	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		str_lst = ft_split(av[1], ' ');
		if (!str_lst)
			return (1);
		nb_lst = ft_lstnew(ft_atoi(str_lst[0]));
		tmp = nb_lst;
		i = 1;
		while (!str_lst[i])
		{
			tmp->next = ft_lstnew(ft_atoi(str_lst[i]));
			i++;
		}
		//ft_lstclear(&nb_lst, );
	}
	return (0);
}
