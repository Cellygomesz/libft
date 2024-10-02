/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:01:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/02 12:12:41 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Refazer !!!!!!! 

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s01;
	char	*ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	s01 = (char *)s1;
	if (!s01)
		return (NULL);
	while (s01[i] != '\0')
	{
		if (s01[i] == set[j])
		{
			i++;
			j++;
		}
		else if (s01[i] != set[j])
		{
			ptr[k] = s01[i];
			i++;
			j++;
			k++;
		}
	}
	return (ptr);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strtrim("eu como batata", "como"));
	return (0);
}
