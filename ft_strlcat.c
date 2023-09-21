/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:31:45 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/13 13:44:07 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sol;

	sol = 0;
	while (*dst && dstsize > 0)
	{
		sol++;
		dst++;
		dstsize--;
	}
	while (dstsize > 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		sol++;
		dstsize--;
	}
	while (*src)
	{
		src++;
		sol++;
	}
	if (dstsize >= 1 && *dst)
		*dst = '\0';
	return (sol);
}
/*#include <stdio.h>
int	main(void)
{
	char	dst[30] = "hola";
	const char	src[] = "tortu";
	size_t		sol;


	sol = ft_strlcat(dst, src, 50);
	printf ("%s\n", dst);
	printf ("%lu", sol);
	return (0);
}*/
