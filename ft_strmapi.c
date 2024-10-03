/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:31:53 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/03 11:00:27 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*rst;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	rst = (char *)malloc(len + 1);
	if (!rst)
		return (NULL);
	while (len > i)
	{
		rst[i] = f(i, s[i]);
		i++;
	}
	rst[i] = '\0';
	return (rst);
}
