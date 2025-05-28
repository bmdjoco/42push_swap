/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:58:22 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/28 14:29:04 by bdjoco           ###   ########.fr       */
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
