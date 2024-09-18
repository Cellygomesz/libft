/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:56:23 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/18 09:24:38 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TA TUDO ERRADO 
char	*ft_strlcpy(char *dest, const char *src, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)src;
	if (size == 0)
	{
		while (ptr[i])
		{
			i++;
		}
		return (ptr);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (ptr[i])
		i++;
	return (ptr);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	*var[] = "o";
	char	*var2[2];
	char	test1[] = "oi";
	char	test2[3];

	ft_strlcpy(var2, var, 2);
	printf("%lu\n", strlcpy(test2, test1, sizeof(test2)));
	printf("%s\n", test2);
	printf("%s\n", var2);
	printf("%lu\n", test2);
}
