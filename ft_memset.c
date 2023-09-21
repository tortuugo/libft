/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:29:37 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/13 15:14:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*aux;
	size_t			cont;

	cont = 0;
	aux = b;
	while (cont < len)
	{
		*(aux + cont) = (unsigned char) c;
		cont++;
	}
	return (aux);
}
/*#include <stdio.h>
int main(void)
{
	char	b[6];
	printf("%s\n", ft_memset(b, 60, 4));
	printf("%s", memset(b, 60, 4));
	return (0);
}*/
