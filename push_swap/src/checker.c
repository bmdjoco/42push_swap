/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:06:50 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/27 21:05:10 by bdjoco           ###   ########.fr       */
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

static void	is_formated(int ac, const char **av)
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

void	nb_occurence(char **str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] == to_find[j])
			i++;

		i++;
	}

}

static void	had_double(int ac, const char **av)
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

			i++;
		}

	}
	else
		had_double_end(ac, av);
}

void	check_args(int ac, const char **av)
{
	if (ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);

}
