/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:27:49 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/12 16:46:32 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *lst)
{
	int		val;
	t_list	*nlst;

	if (!lst || ft_lstsize(lst) < 2)
		return ;
	else
	{
		nlst = lst->next;
		val = lst->val;
		lst->val = nlst->val;
		nlst->val = val;
	}
}

void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = NULL;
	if (!*dest)
		*dest = tmp;
	else
		ft_lstadd_front(dest, tmp);
}

/**
 * @brief Décale d’une position vers le haut tous les élements de la pile donne. Le premier élément devient le dernier.
 *
 * @param lst Pointeur vers une liste chaînée
 */
void	rotate(t_list **lst)
{
	t_list	*tmp;

	if (!lst || ft_lstsize(*lst) == 1)
		return ;
	tmp = *lst;
	tmp = ft_lstlast(tmp);
	tmp->next = ft_lstnew((*lst)->val);
	tmp = (*lst)->next;
	free(*lst);
	*lst = tmp;
}

/**
 * @brief Décale d’une position vers le bas tous les élements de la pile donne. Le dernier élément devient le premier.
 *
 * @param lst_a Pointeur vers une liste chaînée
 */
void	rotate_rev(t_list **lst)
{
	t_list	*prev;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	prev = NULL;
	last = *lst;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *lst;
	*lst = last;
}

