/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_func_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:53:55 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/24 13:23:43 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

static int	nb_rec(int *tab, int nbr)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (i - 1 < tab[0])
	{
		if (tab[i] == nbr)
			n++;
		i++;
	}
	return (n);
}

int	have_double(int *tab)
{
	int	i;

	i = 1;
	while (i - 1 < tab[0])
	{
		if (nb_rec(tab, tab[i]) > 1)
			return (0);
		i++;
	}
	return (1);
}

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
	if (!lst)
		return (NULL);
	save = lst;
	i = 1;
	while (i < size)
	{
		save->next = ft_lstnew(tab[i + 1]);
		if (!save->next)
			return (ft_lstclear(&lst), NULL);
		save = save->next;
		i++;
	}
	return (lst);
}
