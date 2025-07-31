/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:58:22 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/31 16:41:36 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

char	**const_to_nonconst(int ac, const char **av)
{
	char	**res;
	int		i;

	res = malloc((ac + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i] = (char *) av[i];
		i++;
	}
	res[i] = NULL;
	return (res);
}
