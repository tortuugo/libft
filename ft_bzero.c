/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:10:55 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/13 15:14:39 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	size_t			cont;
	unsigned char	*aux;

	cont = 0;
	aux = s;
	while (cont < n)
	{
		aux[cont] = '\0';
		cont++;
	}
}
/*int main(void)
{
	char	s[] = "hola";
	void	*pun;

	pun = &s[0];
	ft_bzero(pun + 2, 2);
	//bzero(pun + 2, 2);
	printf("%s", pun);
	return (0);
}*/
