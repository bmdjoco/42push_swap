/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdjoco <bdjoco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:09:50 by bdjoco            #+#    #+#             */
/*   Updated: 2025/05/21 15:23:10 by bdjoco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	getnbw(char *s, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
			words++;
		while (s[i] && !(s[i] == sep))
			i++;
	}
	return (words);
}

static char	*alloc_word(char *str, char sep)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && !(str[len] == sep))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_words(char **words, int j)
{
	while (j)
	{
		j--;
		free(words[j]);
	}
	free(words);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * (getnbw(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = alloc_word(&s[i], c);
			if (!res[j])
				return (free_words(res, j));
			j++;
		}
		while (s[i] && !(s[i] == c))
			i++;
	}
	res[j] = NULL;
	return (res);
}
