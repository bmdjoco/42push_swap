/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:59:51 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/29 13:41:59 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

t_list	*fill_tab_end(int ac, char **av)
{
	int		i;
	char	**str;
	t_list	*lst_a;
	t_list	*new;

	lst_a = ft_lstnew(ft_atoi(av[1]));
	if (!lst_a)
		error_message();
	i = 2;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		if (!new)
			return(free_list(lst_a), error_message(), NULL);
		ft_lstadd_back(&lst_a, new);
		i++;
	}
	return (lst_a);
}

t_list	*fill_tab(int ac, char **av)
{
	t_list	*lst_a;
	t_list	*new;
	char	**str;
	int		i;

	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (!str)
			error_message();
		lst_a = ft_lstnew(ft_atoi(str[0]));
		if (!lst_a)
			return(free_split(str), error_message(), NULL);
		i = 1;
		while (str[i])
		{
			new = ft_lstnew(ft_atoi(str[i]));
			if (!new)
				return(free_list(lst_a), free_split(str), error_message(), NULL);
			ft_lstadd_back(&lst_a, new);
			i++;
		}
		return (free_split(str), lst_a);
	}
	else
		return (fill_tab_end(ac, av));
}
