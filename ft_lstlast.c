/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:49 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/20 16:11:51 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
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

    printf("%s", (char *)ft_lstlast(lst)->content);
    return (0);
}*/
