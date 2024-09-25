/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:25:49 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/09/25 13:25:54 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int             i;
    unsigned char   *s01;
    unsigned char   *s02;

    i = 0;
    s01 = (unsigned char *)s1;
    s02 = (unsigned char *)s2;

    while (i < n && (s01[i] || s02[i]))
    {
        if (s01 > s02)
            return (1);
        else if (s01 < s02)
            return (-1);
        else
            return (0);
    }
    return(0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    // quando s1 é maior, o valor é positivo. quando s2 é maior, o valor é negativo. quando é igual, o valor é 0.
    printf("original: %d\n", memcmp("lov9", "lov", 4));
    printf("minha: %d\n", ft_memcmp("lov9", "lov", 4));
    return (0);
}