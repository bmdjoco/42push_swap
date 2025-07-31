/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:06:50 by bdjoco            #+#    #+#             */
/*   Updated: 2025/07/31 16:40:09 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

static void	is_formated_end(int ac, const char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' && ft_isdigit(av[i][j + 1]))
				j++;
			else if (!ft_isdigit(av[i][j]))
				error_message();
			while (ft_isdigit(av[i][j]))
				j++;
		}
		i++;
	}
}

void	is_formated(int ac, const char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		if (!av[1][i])
			error_message();
		while (av[1][i])
		{
			if (av[1][i] == '-' && ft_isdigit(av[1][i + 1]))
				i++;
			else if (!ft_isdigit(av[1][i]))
				error_message();
			while (ft_isdigit(av[1][i]))
				i++;
			if (av[1][i] == ' ')
				i++;
		}
	}
	else
		is_formated_end(ac, av);
}

static int	nb_occurence(char **str, char *to_find)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = -1;
	while (str[0][++j])
		if (!(str[0][j] >= '0' && str[0][j] <= '9'))
			i = 1;
	j = i;
	nb = 0;
	while (str[i])
	{
		if (atoi(str[i]) == atoi(to_find))
			nb++;
		i++;
	}
	if (nb > 1)
		return (0);
	return (1);
}

static void	had_double_end(int ac, const char **av)
{
	int		i;
	char	**str;

	str = const_to_nonconst(ac, av);
	if (!str)
		error_message();
	i = 1;
	while (str[i])
	{
		if (ft_atol(str[i]) < -2147483648
			|| ft_atol(str[i]) > 2147483647
			|| !nb_occurence(str, str[i]))
			return (free(str), error_message());
		i++;
	}
	free(str);
}

void	had_double(int ac, const char **av)
{
	int		i;
	char	**str;

	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (!str)
			error_message();
		i = 0;
		while (str[i])
		{
			if (ft_atol(str[i]) < -2147483648
				|| ft_atol(str[i]) > 2147483647
				|| !nb_occurence(str, str[i]))
				return (free_split(str), error_message());
			i++;
		}
		free_split(str);
	}
	else
		had_double_end(ac, av);
}
