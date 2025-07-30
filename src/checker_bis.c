/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:58:22 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/30 23:38:57 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	puttab(char **str)
{
	int i = 0;
	while (str[i])
	{
		int j = 0;
		while (str[i][j])
		{
			ft_putchar_fd(str[i][j], 1);
			j++;
		}
		ft_putchar_fd('\n', 1);
		i++;
	}
}

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
