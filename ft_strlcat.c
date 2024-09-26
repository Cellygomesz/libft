/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:07:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/26 19:12:05 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		szdst;
	int		i;
	char	*ptrsrc;

	szdst = ft_strlen(dst);
	i = 0;
	ptrsrc = (char *)src;
	while (src[i])
	{
		dst[szdst] = src[i];
		szdst++;
		i++;
	}
	dst[szdst] = '\0';
	return (0);
}
