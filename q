#push_swap.h
typedef struct s_list
{
	int			val;
	struct s_list	*next;
}	t_list;

#main.c
void	print_lst(t_list **lst)
{
	t_list	*tmp;
	//int		i;

	//i = 0;
	tmp = *lst;
	//printf("size plst %d\n", ft_lstsize(*lst));
	while (tmp)
	{
		//printf("%d | %d\n", i, tmp->val);
		tmp = tmp->next;
	}
}

int main(int ac, const char **av)
{
	t_list	**lst_a;

	if(ac < 2)
		error_message();
	is_formated(ac, av);
	had_double(ac, av);
	lst_a = fill_tab(ac, av);
	print_lst(lst_a);
	sort(lst_a);
	print_lst(lst_a);
	free_list(lst_a);
	return 0;
}

#sort_method.c
static void	sort_for_tree(t_list **lst_a)
{
	t_list **lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return(free_list(lst_a), error_message());
	if ((*lst_a)->next->val < (*lst_a)->val)
		sa(*lst_a);
	if (ft_lstlast(*lst_a)->val < (*lst_a)->val)
		rra(lst_a);
	if (ft_lstlast(*lst_a)->val < (*lst_a)->next->val)
	{
		pb(lst_a, lst_b);
		sa(*lst_a);
		pa(lst_a, lst_b);
	}
	free_list(lst_b);
}
static void	sort_for_four(t_list **lst_a)
{
	int	emp;
	t_list **lst_b;

	lst_b = malloc(sizeof(t_list *));
	if (!lst_b)
		return(free_list(lst_a), error_message());
	emp = nb_min(lst_a);
	if (emp == 0)
		pb(lst_a, lst_b);
	else if (emp == 1)
	{
		sa(*lst_a);
		pb(lst_a, lst_b);
	}
	else if (emp == 2)
	{
		ra(*lst_a);
		sa(*lst_a);
		pb(lst_a, lst_b);
	}
	sort_for_tree(lst_a);
	pa(lst_a, lst_b);
	free_list(lst_b);
}
void	sort(t_list	**lst_a)
{
	int	l;

	l = ft_lstsize(*lst_a);
	if (l == 2)
		sort_for_two(lst_a);
	if (l == 3)
		sort_for_tree(lst_a);
	if (l == 4)
		sort_for_four(lst_a);
}

#args_func.c
void	free_list(t_list **lst)
{
	t_list	*tmp;
	int		i;

	i = 0;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
		i++;
	}
	free(lst);
}
int	nb_min(t_list **lst)
{
	int		i;
	int		min;
	int		min_v;
	t_list	*tmp;

	if (!*lst)
		return (-1);
	i = 0;
	tmp = *lst;
	min_v = tmp->val;
	min = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
		if(tmp->val < min_v)
		{
			min = i;
			min_v = tmp->val;
		}
	}
	return (min);
}
static t_list	**fill_tab_end(int ac, const char **av)
{
	int		i;
	t_list	**lst_a;
	t_list	*new;

	lst_a = malloc(sizeof(t_list *));
	if (!lst_a)
		error_message();
	*lst_a = ft_lstnew(ft_atoi(av[1]));
	if (!*lst_a)
		error_message();
	i = 2;
	while (i < ac)
	{
		new = ft_lstnew(ft_atoi(av[i]));
		if (!new)
			return(free_list(lst_a), error_message(), NULL);
		ft_lstadd_back(lst_a, new);
		i++;
	}
	return (lst_a);
}
t_list	**fill_tab(int ac, const char **av)
{
	t_list	**lst_a;
	t_list	*new;
	char	**str;
	int		i;

	lst_a = malloc(sizeof(t_list *));
	if (!lst_a)
		error_message();
	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (!str)
			error_message();
		*lst_a = ft_lstnew(ft_atoi(str[0]));
		if (!*lst_a)
			return(free_split(str), error_message(), NULL);
		i = 1;
		while (str[i])
		{
			new = ft_lstnew(ft_atoi(str[i]));
			if (!new)
				return(free_list(lst_a), free_split(str), error_message(), NULL);
			ft_lstadd_back(lst_a, new);
			i++;
		}
		return (free_split(str), lst_a);
	}
	else
		return (fill_tab_end(ac, av));
}

#sort_func.c
void	sa(t_list *lst_a)
{
	swap(lst_a);
	ft_putstr_fd("sa\n", 1);
}
void	pa(t_list **lst_a, t_list **lst_b)
{
	push(lst_b, lst_a);
	ft_putstr_fd("pa\n", 1);
}
void	pb(t_list **lst_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	ft_putstr_fd("pb\n", 1);
}
void	ra(t_list *lst_a)
{
	rotate(lst_a);
	ft_putstr_fd("ra\n", 1);
}
void	rb(t_list *lst_b)
{
	rotate(lst_b);
	ft_putstr_fd("rb\n", 1);
}
void	rra(t_list **lst_a)
{
	rotate_rev(lst_a);
	ft_putstr_fd("rra\n", 1);
}
void	rrb(t_list **lst_b)
{
	rotate_rev(lst_b);
	ft_putstr_fd("rrb\n", 1);
}

#sort_func_bis.c
void	swap(t_list *lst)
{
	int		val;
	t_list	*nlst;

	if (!lst || ft_lstsize(lst) < 2)
		return ;
	else
	{
		nlst = lst->next;
		val = lst->val;
		lst->val = nlst->val;
		nlst->val = val;
	}
}
void	push(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = NULL;
	if (!*dest)
		*dest = tmp;
	else
		ft_lstadd_front(dest, tmp);
}
void	rotate(t_list *lst)
{
	t_list	*tmp;

	if (!lst || ft_lstsize(lst) == 1)
		return ;
	tmp = lst;
	tmp = ft_lstlast(tmp);
	tmp->next = ft_lstnew(lst->val);
	tmp = lst->next;
	free(lst);
	lst = tmp;
}
void	rotate_rev(t_list **lst)
{
	t_list	*prev;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	prev = NULL;
	last = *lst;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *lst;
	*lst = last;
}

#error_msg.c
void	error_message(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

#erreur
➜  42push_swap git:(main) ✗ valgrind --leak-check=full ./a.out 10 8 7
==7496== Memcheck, a memory error detector
==7496== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==7496== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==7496== Command: ./a.out 10 8 7
==7496==
sa
rra
==7496== Conditional jump or move depends on uninitialised value(s)
==7496==    at 0x109B94: free_list (in /home/bdjoco/repo/42push_swap/a.out)
==7496==    by 0x10AA56: sort_for_tree (in /home/bdjoco/repo/42push_swap/a.out)
==7496==    by 0x10AB91: sort (in /home/bdjoco/repo/42push_swap/a.out)
==7496==    by 0x109245: main (in /home/bdjoco/repo/42push_swap/a.out)
==7496==
==7496==
==7496== HEAP SUMMARY:
==7496==     in use at exit: 8 bytes in 1 blocks
==7496==   total heap usage: 7 allocs, 6 frees, 104 bytes allocated
==7496==
==7496== 8 bytes in 1 blocks are definitely lost in loss record 1 of 1
==7496==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==7496==    by 0x109D7F: fill_tab (in /home/bdjoco/repo/42push_swap/a.out)
==7496==    by 0x109229: main (in /home/bdjoco/repo/42push_swap/a.out)
==7496==
==7496== LEAK SUMMARY:
==7496==    definitely lost: 8 bytes in 1 blocks
==7496==    indirectly lost: 0 bytes in 0 blocks
==7496==      possibly lost: 0 bytes in 0 blocks
==7496==    still reachable: 0 bytes in 0 blocks
==7496==         suppressed: 0 bytes in 0 blocks
==7496==
==7496== Use --track-origins=yes to see where uninitialised values come from
==7496== For lists of detected and suppressed errors, rerun with: -s
==7496== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)
