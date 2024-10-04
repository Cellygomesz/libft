/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:25:11 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:50 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;
	int flag;

	i = 0;
	words = 0;
	flag = 0;
	while (s[i])
	{
		if ((s[i] == c || s[i + 1] == '\0') && (flag == 0))
		{
			words++;
			flag = 1;
		}
		else if (s[i] != c)
			flag = 0;
		i++;
	}
	return (words);
}

static char	**create_words(char *s, int start, int end)
{

}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	create_words(result, s, c);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_split("momo 42 tots   $   é muito tots", ' '));
	return (0);
}
