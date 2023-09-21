/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:13:10 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/20 18:53:41 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ult;

	if (lst)
	{
		if (*lst)
		{
			ult = ft_lstlast(*lst);
			ult->next = new;
		}
		else
			*lst = new;
	}
}
/*int main(void)
{
	t_list	*lst;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nuevo;

	nuevo = malloc (sizeof(t_list));
	nuevo->content = "o";
	nuevo->next = NULL;

	nodo1 = malloc (sizeof(t_list));
	nodo1->content = "hola";
	nodo1->next = NULL;

	nodo2 = malloc (sizeof(t_list));
	nodo2->content = "aadios";
	nodo2->next = nodo1;

	lst = nodo2;

	ft_lstadd_back(&lst, nuevo);
	printf("%d", ft_lstsize(lst));
	return (0);
}*/
