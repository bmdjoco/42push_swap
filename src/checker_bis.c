/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:58:22 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/14 15:12:42 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**const_to_nonconst(int ac, const char **av)
{
	char	**res;
	int		i;

	res = malloc(ac * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i] = (char *) av[i];
		i++;
	}
	return (res);
}

void	set_index(t_list *head, int link_size)
{
	t_list	*biggest;
	t_list	*tmp;

	while (link_size > 0)
	{
		biggest = NULL;
		tmp = head;
		while (tmp)
		{
			if (!tmp->index && (biggest == NULL
					|| tmp->val > biggest->val))
				biggest = tmp;
			tmp = tmp->next;
		}
		if (biggest)
			biggest->index = link_size;
		link_size--;
	}
}
