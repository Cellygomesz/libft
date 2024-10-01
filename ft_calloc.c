/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:46:41 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/01 10:23:47 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	allsize;
	void	*ptr;

	allsize = nmemb * size;
	ptr = (void *)malloc(allsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, allsize);
	return (ptr);
}
