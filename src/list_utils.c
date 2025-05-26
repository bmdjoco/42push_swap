/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:27:49 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/26 10:39:35 by bdjoco           ###   ########.fr       */
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

void	push(t_list *src, t_list *dest)
{
	t_list	*tmp;
	t_list	*new_src;

	if (!src)
		return ;
	new_src = ft_lstnew(src->val);
	ft_lstadd_front(&dest, new_src);
	tmp = src->next;
	ft_lstdelone(src);
	src = tmp;
}

void	rotate(t_list *lst)
{
	t_list	*tmp;

	if (!lst || ft_lstsize(lst) == 1)
		return ;
	tmp = ft_lstnew(lst->val);
	ft_lstadd_back(&lst, tmp);
	tmp = lst->next;
	ft_lstdelone(lst);
	lst = tmp;
}

void	rotate_rev(t_list *lst)
{
	t_list	*tmp;

	if (!lst || ft_lstsize(lst) == 1)
		return ;
	tmp = ft_lstnew(ft_lstlast(lst)->val);;
	ft_lstadd_front(&lst, tmp);
	tmp = ft_lstlast(lst);
	ft_lstdelone(tmp);
}
