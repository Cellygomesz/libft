/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:23:34 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/27 09:24:10 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// não terminei e está dando erro :(


#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little == NULL || little[0] == '\0')
        return ((char *)big);
    while (big[i] && i < len)
    {
        if (big[i] == little[i])
        {
            while (big[i + j] == little[j] && i + j < len)
            {
                if (little[i + j] == '\0')
                    return ((char *)big + 1);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <bsd/string.h>

int main() {
    const char *largestring = "Hello, world! ye";
    const char *smallstring = "world";
    int len = 15;
    char *result = strnstr(largestring, smallstring, len);
    char *result2 = ft_strnstr(largestring, smallstring, len);

    printf("Meu resuldado: %s\n", result2);
    printf("Função original: %s\n", result);
}

