/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:19:44 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/01 16:21:00 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*ps;
	int		i;

	i = 0;
	ps = (char *)s;
	if (ps == NULL || start == NULL || len == NULL)
		return (NULL);
	ptr = (char *)malloc(len + 1);
	while (ps[len] > ps[0])
	{
		ptr[i] = ps[start];
		len--;
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
