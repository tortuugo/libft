/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:24:25 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/21 19:29:59 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*sol;
	t_list	*nodo;
	void	*content;

	if (!f || !del)
		return (NULL);
	sol = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		nodo = ft_lstnew(content);
		if (!nodo)
		{
			(*del)(content);
			ft_lstclear(&sol, del);
			return (0);
		}
		ft_lstadd_back(&sol, nodo);
		lst = lst->next;
	}
	return (sol);
}
