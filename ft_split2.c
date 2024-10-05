/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:21:20 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/05 17:38:35 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c);
static void	create_result(char **result, const char *s, char c);
static char	*create_word(const char *s, int start, int end);

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	create_result(result, s, c);
	return (result);
}

static int	count_words(const char *s, char c)
{
	int i;
	int words;
	int flag;

	i = 0;
	words = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] == c && flag == 0) //Final da palavra (primeiro ' ')
			flag = 1;
		else if (s[i] != c && flag == 1) // Início de uma palavra
		{
			words++;
			flag = 0;
		}
		i++;
	}
	return (words);
}

static void	create_result(char **result, const char *s, char c)
{
	int i;
	int start;
	int word_index;

	i = 0;
	word_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[word_index++] = create_word(s, start, i - 1); // Chama a funçção para criar cada palavra.
		}
		else
			i++;
	}
	result[word_index] = "\0"; // Finaliza o array com NULL
}

static char	*create_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc((end - start + 2) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}