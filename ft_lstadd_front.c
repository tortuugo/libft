/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:00:27 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/20 11:49:01 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*int main(void)
{
	t_list *lst = NULL;

	t_list *nodo1 = malloc (sizeof(t_list));
	nodo1->content = "primero";
	nodo1->next = NULL;

	t_list *nodo2 = malloc (sizeof(t_list));
	nodo2->content = "segundo";
	nodo2->next = NULL;

	ft_lstadd_front(&lst, nodo1);
	ft_lstadd_front(&lst, nodo2);

	t_list *current = lst;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while (lst != NULL)
	{
		t_list *aux = lst;
		lst = lst->next;
		free (aux);
	}
	return (0);
}*/
