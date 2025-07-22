/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:01:21 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/23 13:21:06 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_tab(t_list **lst_a)
{
	int		size;
	int		*tab;
	int		i;
	t_list	*tmp;

	tab = malloc(sizeof(int) * (size = ft_lstsize(*lst_a)));
	tmp = *lst_a;
	i = 0;
	while (tmp)
	{
		tab[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	tab = sortint(tab, size);
	tmp = *lst_a;
	while (tmp)
	{
		i = 0;
		while (i < size && tab[i] != tmp->val)
			i++;
		tmp->val = i;
		tmp = tmp->next;
	}
	free(tab);
}

int	get_chunk_count(int size)
{
	if (size <= 100)
		return (5);
	else if (size <= 200)
		return (6);
	else if (size <= 300)
		return (8);
	else if (size <= 400)
		return (10);
	else if (size <= 500)
		return (11);
	else if (size <= 1000)
		return (13);
	else
		return (18);
}

static void	swapint(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*sortint(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				swapint(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
	return (tab);
}

void	rotate_to_min(t_list **lst_a, int pos, int max)
{
	if (pos <= max / 2)
		while (--pos >= 0)
			ra(lst_a);
	else
		while (++pos <= max)
			rra(lst_a);
}
