/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:38:57 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/28 17:02:29 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	len;

	len = n - 1;
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (0);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
