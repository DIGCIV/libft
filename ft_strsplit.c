/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:46:02 by ucrooks           #+#    #+#             */
/*   Updated: 2019/06/07 19:14:14 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		cword;
	int		i;

	cword = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			cword++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (cword);
}

static void		word_copy(char *dest, char const *src, int start, int end)
{
	int		i;

	i = 0;
	while (start + i < end)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
}

static char		**free_word(char **words, int n)
{
	while (n > 0)
	{
		n--;
		free(words[n]);
	}
	free(words);
	return (NULL);
}

static char		**word_move(char **words, char const *s, int cword, char c)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	n = 0;
	while (n < cword)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			j = i;
			while (s[j] != c && s[j] != '\0')
				j++;
			if (!(words[n] = (char*)malloc(sizeof(char) * (j - i) + 1)))
				return (free_word(words, n));
			word_copy(words[n], s, i, j);
			i = j;
		}
		n++;
	}
	words[n] = NULL;
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		cword;

	if (s == NULL)
		return (NULL);
	cword = count_words(s, c);
	words = (char**)malloc(sizeof(char*) * cword + 1);
	if (words == NULL)
		return (NULL);
	words = word_move(words, s, cword, c);
	return (words);
}
