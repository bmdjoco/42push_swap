/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:06:50 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/28 14:30:35 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
			else if(!ft_isdigit(av[i][j]))
				error_message();
			while (ft_isdigit(av[i][j]))
				j++;
		}
		i++;
	}
}

void	is_formated(int ac, const char **av)
{
	int		i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == '-' && ft_isdigit(av[1][i + 1]))
				i++;
			else if(!ft_isdigit(av[1][i]))
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
#include <stdio.h>
static void	nb_occurence(char **str, char *to_find)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] && to_find[j] && str[i][j] == to_find[j])
		{
			printf("str[%d][%d] = %c | to_find[%d] = %c\n", i, j, str[i][j], j, to_find[j]);
			j++;
		}
		if (!str[i][j] && !to_find[j])
			nb++;
		i++;
	}
	if (nb > 1)
		error_message();
}

static void	had_double_end(int ac, const char **av)
{
	int	i;
	char	**str;

	str = const_to_nonconst(ac, av);
	if (!str)
		error_message();
	i = 1;
	while (i < ac)
	{
		nb_occurence(str, str[i]);
		if (ft_atol(str[i]) < -2147483648
				|| ft_atol(str[i]) > 2147483647)
				error_message();
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
			error_message();;
		i = 0;
		while (str[i])
		{
			nb_occurence(str, str[i]);
			if (ft_atol(str[i]) < -2147483648
				|| ft_atol(str[i]) > 2147483647)
				error_message();
			i++;
		}
		while (--i >= 0)
			free(str[i]);
		free(str);
	}
	else
		had_double_end(ac, av);
}
