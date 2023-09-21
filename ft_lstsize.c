/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:52:57 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/20 13:31:19 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		sol;
	t_list	*i;

	sol = 0;
	while (lst != NULL)
	{
		i = lst;
		lst = lst->next;
		sol++;
	}
	return (sol);
}
/*int main(void)
{
	t_list *lst = NULL;
	t_list *nodo1;
	t_list *nodo2;

	nodo1 = malloc (sizeof(t_list));
	nodo1->content = "hola";
	nodo1->next = NULL;

	nodo2 = malloc (sizeof(t_list));
	nodo2->content = "adios";
	nodo2->next = NULL;

	ft_lstadd_front(&lst, nodo1);
	ft_lstadd_front(&lst, nodo2);

	printf("%d", ft_lstsize(lst));
	return (0);
}*/
