/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:32:42 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/21 18:20:28 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*c_dst;
	const char	*c_src;
	size_t		cont;

	if (!dst && !src)
		return (0);
	c_dst = dst;
	c_src = src;
	cont = 0;
	while (cont < n)
	{
		*(c_dst + cont) = *(c_src + cont);
		cont++;
	}
	return (dst);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char xd[] = "mondongo";
	char xd1[] = "jajalol";
	void *dst;
	const void *src;

	dst = xd;
	src = xd1;
	printf ("%s", memcpy(dst, src, 6));
	return (0);
}*/
