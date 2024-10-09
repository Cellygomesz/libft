/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:40:12 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/09 16:35:12 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst); 
}

#include <stdio.h>

int main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	node3;

	char	*frase1 = "hello, word!";
	char	*frase2 = "olá, mundo!";
	char	*frase3 = "Bonjour le monde!"; // quero que me retorne essa aqui

	node1.content = frase1;
	node1.next = &node2;
	node2.content = frase2;
	node2.next = &node3;
	node3.content = frase3;
	node3.next = NULL;

	t_list	*result = ft_lstlast(&node1);

	printf("resultado: %s\n", (char *)result->content);
	return (0);
}
