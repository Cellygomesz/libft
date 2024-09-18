/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:07:30 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/18 09:26:34 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    const char *str = "Hello, this is a simple example. ola mindo";
    const char *substr = "simple";
    unsigned int len = 27;

    char *result = strnstr(str, substr, len);

	printf("Substring encontrada: \"%s\"\n", result);

    return 0;
}

/*#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 20);
	printf("%p\n", ptr);
	return (0);
}*/
