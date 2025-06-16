/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:35:55 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:46:28 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief R'envoie l'emplacement du nombre le plus grand
 *
 * @param lst Liste de nombre
 */
static int	find_max(t_list *lst)
{
	int		max;
	t_list	*tmp;

	max = INT_MIN;
	tmp = lst;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

/**
 * @brief R'envoie le nombre maximum de bit d'un chiffre
 *
 * @param max_nbr Nombre le plus grand de la liste
 */
static int	find_bits(int max_nbr)
{
	int	max_bits;

	max_bits = 0;
	while (max_nbr > 0)
	{
		max_nbr >>= 1;
		max_bits++;
	}
	return (max_bits);
}

static void	inititalisation(t_list **lst_a, t_list **lst_b
	, int *b_nbr, int *m_bits)
{
	if (!lst_b)
		return (free_list(lst_a), error_message());
	*lst_b = NULL;
	*b_nbr = find_max(*lst_a);
	*m_bits = find_bits(*b_nbr);
}

/**
 * @brief Trier les elements de la liste donne dans l'ordre croissant
 * en utilisant radix
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	sort_algo(t_list **lst_a)
{
	int		biggest_nbr;
	int		max_bits;
	int		i;
	int		j;
	t_list	**lst_b;

	lst_b = malloc(sizeof(t_list *));
	inititalisation(lst_a, lst_b, &biggest_nbr, &max_bits);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= biggest_nbr)
		{
			if (((*lst_a)->index >> i) & 1)
				ra(lst_a);
			else
				pb(lst_a, lst_b);
			j++;
		}
		while (*lst_b)
			pa(lst_a, lst_b);
		i++;
	}
	free_list(lst_b);
}
