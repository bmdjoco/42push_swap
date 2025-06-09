/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:09:41 by bdjoco            #+#    #+#             */
/*   Updated: 2025/06/09 19:47:20 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>

typedef struct s_list
{
	int			val;
	struct s_list	*next;
}	t_list;

int			ft_isdigit(int c);
int			ft_atoi(const char *str);
int			ft_lstsize(t_list *lst);
int			nb_min(t_list **lst);

long int	ft_atol(const char *str);

void		sort(t_list	*lst_a);
void		sa(t_list *lst_a);
void		sb(t_list *lst_b);
void		swap(t_list *lst);
void		ra(t_list *lst_a);
void		rb(t_list *lst_b);
void		rra(t_list **lst_a);
void		rrb(t_list **lst_b);
void		rotate(t_list *lst);
void		rotate_rev(t_list **lst);
void		free_list(t_list **lst);
void		free_split(char **split);
void		ft_lstdelone(t_list *lst);
void		ft_lstclear(t_list **lst);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		push(t_list **src, t_list **dest);
void		rr(t_list *lst_a, t_list *lst_b);
void		ss(t_list *lst_a, t_list *lst_b);
void		pa(t_list **lst_a, t_list **lst_b);
void		pb(t_list **lst_a, t_list **lst_b);
void		rrr(t_list **lst_a, t_list **lst_b);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));

char		**ft_split(const char *s, char c);

t_list		*ft_lstnew(int val);
t_list		*ft_lstlast(t_list *lst);
t_list		*fill_tab(int ac, const char **av);
t_list		*ft_lstchoose(t_list *lst, int nb);

int			checker_input(int ac, char **av);
void		error_message(void);
void		had_double(int ac, const char **av);
void		is_formated(int ac, const char **av);
char		**const_to_nonconst(int ac, const char **av);

#endif
