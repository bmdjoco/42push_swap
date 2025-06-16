/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_method_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:43:26 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/16 13:28:18 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Trier les cinqs elements de la liste donne dans l'ordre croissant
 *
 * @param lst_a Pointeur vers la liste chaînée représentant la pile A
 */
void	sort_for_five(t_list **lst_a)
{
	int		i;
	int		emp;
	t_list	**lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return (free_list(lst_a), error_message());
	*lst_b = NULL;
	emp = nb_min(lst_a);
	i = 0;
	while (i < emp)
	{
		ra(lst_a);
		i++;
	}
	pb(lst_a, lst_b);
	sort_for_four(lst_a);
	pa(lst_a, lst_b);
	free_list(lst_b);
}
