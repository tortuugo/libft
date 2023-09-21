/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:23:15 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/21 18:13:41 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*sol;
	size_t			i;

	i = 0;
	if (!count || !size)
	{
		sol = (void *)malloc(0);
		return (sol);
	}
	sol = malloc(count * size);
	if (!sol)
		return (0);
	while (i < count * size)
	{
		sol[i] = '\0';
		i++;
	}
	return (sol);
}
/*#include <unistd.h>
int main(void)
{
	unsigned char	*xd;
	xd = (unsigned char *)ft_calloc (4, sizeof(unsigned char));
	write (1, xd, 4);
	return (0);
}*/
