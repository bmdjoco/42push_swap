/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:59:51 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/26 23:33:37 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*fill_list(int argc, char **argv)
{
	t_list	*list;
	char	**args;
	int		i;
	int		num;

	i = 1;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	while (argc > 2 && i < argc)
	{
		num = ft_atoi_check(argv[i]);
		if (!add_unique(&list, num))
			return (free_list(&list), NULL);
		i++;
	}
	if (argc == 2 && args)
	{
		i = 0;
		while (args[i])
		{
			num = ft_atoi_check(args[i]);
			if (!add_unique(&list, num))
				return (free_split(args), free_list(&list), NULL);
			i++;
		}
		return (free_split(args), list);
	}
	return (list);
}

int	ft_atoi_check(char *str)
{
	long	n;
	int		sign;
	int		i;

	n = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - '0');
	n *= sign;
	if (str[i] || n < -2147483648 || n > 2147483647)
		return (2147483648);
	return ((int)n);
}

int	add_unique(t_list **lst, int val)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->val == val)
			return (0);
		tmp = tmp->next;
	}
	tmp = ft_lstnew(val);
	if (!tmp)
		return (0);
	ft_lstadd_back(lst, tmp);
	return (1);
}

void	free_list(t_list **lst)
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

