/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:59:08 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/24 10:38:38 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i = 0;
	temp = (char *)malloc((sizeof(const char)) * (i + 1));
	if (temp == NULL)
		return (0);
	else
	{
		while (s[i])
		{
			temp[i] = s[i];
			i++;
		}
	}
	return (temp);
}
