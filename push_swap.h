/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:09:41 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/18 12:48:22 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int				val;
	struct s_list	*next;
}	t_list;

int			ft_isdigit(int c);
int			nb_min(t_list **lst);
int			ft_lstsize(t_list *lst);
int			ft_atoi(const char *str);
int			get_chunk_count(int size);
int			find_max_pos(t_list *lst);
int			*sortint(int *tab, int size);
int			exists_in_range(t_list *lst, int min, int max);
int			find_pos_in_range(t_list *lst, int min, int max);

long int	ft_atol(const char *str);

void		sort(t_list	**lst_a);
void		sa(t_list *lst_a);
void		sb(t_list *lst_b);
void		swap(t_list *lst);
void		ra(t_list **lst_a);
void		rb(t_list **lst_b);
void		rra(t_list **lst_a);
void		rrb(t_list **lst_b);
void		rotate(t_list **lst);
void		free_list(t_list **lst);
void		rotate_rev(t_list **lst);
void		list_tab(t_list **lst_a);
void		free_split(char **split);
void		ft_lstdelone(t_list *lst);
void		ft_lstclear(t_list **lst);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		sort_for_tree(t_list **lst_a);
void		sort_for_four(t_list **lst_a);
void		push(t_list **src, t_list **dest);
void		rr(t_list **lst_a, t_list **lst_b);
void		ss(t_list *lst_a, t_list *lst_b);
void		pa(t_list **lst_a, t_list **lst_b);
void		pb(t_list **lst_a, t_list **lst_b);
void		rrr(t_list **lst_a, t_list **lst_b);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		push_back(t_list **lst_a, t_list **lst_b);
void		rotate_to_min(t_list **lst_a, int pos, int max);
void		sort_chunk(t_list **lst_a, t_list **lst_b);
void		push_chunk(t_list **lst_a, t_list **lst_b, int min, int max);

char		**ft_split(const char *s, char c);

t_list		*ft_lstnew(int val);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstchoose(t_list *lst, int nb);
t_list		**fill_tab(int ac, const char **av);

int			checker_input(int ac, char **av);
void		error_message(void);
void		had_double(int ac, const char **av);
void		is_formated(int ac, const char **av);
char		**const_to_nonconst(int ac, const char **av);

#endif
