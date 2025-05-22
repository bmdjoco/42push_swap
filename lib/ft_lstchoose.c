/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchoose.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:21:41 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/22 15:22:52 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstchoose(t_list *lst, int nb)
{
	t_list	*tmp;
	int		i;

	if (!lst)
		return (NULL);
	tmp = lst;
	i = 0;
	while (tmp->next && i < nb)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
