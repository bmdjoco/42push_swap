/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_func_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:53:55 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/23 15:44:26 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*fill_number(int *tab)
{
	int		i;
	int		size;
	t_list	*lst;
	t_list	*save;

	size = tab[0];
	if (size < 1)
	return (NULL);
	lst = ft_lstnew(tab[1]);
	save = lst;
	i = 1;
	while (i < size)
	{
		save->next = ft_lstnew(tab[i + 1]);
		if (!save)
			return (ft_lstclear(&lst), NULL);
		save = save->next;
		i++;
	}
	return (lst);
}
