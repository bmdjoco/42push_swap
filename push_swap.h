/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:09:41 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/22 15:23:42 by bdjoco           ###   ########.fr       */
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

int		ft_atoi(char *str);
int		ft_lstsize(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

char	**ft_split(char *s, char c);

t_list	*ft_lstnew(int val);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstchoose(t_list *lst, int nb);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
