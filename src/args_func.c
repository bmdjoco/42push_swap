/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:59:51 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/25 19:54:09 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

static int	check_args_bis(int	ac, const char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j])
				&& (j != 0 && av[i][j] == '-'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_args(int	ac, const char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == '-')
				i++;
			if (av[1][i] && !ft_isdigit(av[1][i]))
				return (0);
			while (av[1][i] && ft_isdigit(av[1][i]))
				i++;
			if (av[1][i] && av[1][i] == ' ')
				i++;
		}
	}
	else if (!check_args_bis(ac, av))
		return (0);
	return (1);
}

int	*args_isstring(const char **av)
{
	char	**str_lst;
	int		*tab;
	int		l;
	int		i;

	i = 0;
	l = 1;
	while (av[1][i++])
		if (av[1][i] == ' ')
			l++;
	tab = (int *)malloc(sizeof(int) * (l + 1));
	str_lst = ft_split(av[1], ' ');
	if (!tab || !str_lst)
		return (NULL);
	tab[0] = l;
	i = 0;
	while (str_lst[i])
	{
		if (ft_atol(str_lst[i]) > 2147483647
			|| ft_atol(str_lst[i]) < -2147483648)
			return (NULL);
		tab[i + 1] = ft_atoi(str_lst[i]);
		i++;
	}
	return (tab);
}

int	*args_isarray(int	ac, const char **av)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * (ac));
	if (!tab)
		return (NULL);
	tab[0] = ac - 1;
	i = 0;
	while (i < ac - 1)
	{
		if (ft_atol(av[i + 1]) > 2147483647
			|| ft_atol(av[i + 1]) < -2147483648)
			return (NULL);
		tab[i + 1] = ft_atoi(av[i + 1]);
		i++;
	}
	return (tab);
}

int	*get_number_tab(int	ac, const char **av)
{
	int	*tab;
	if (ac == 2)
		tab = args_isstring(av);
	else
		tab = args_isarray(ac, av);
	if (!tab)
		return (NULL);
	return (tab);
}
