/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:41:43 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 16:20:14 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen (src));
	while (i < dstsize - 1 && *(src + i))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen (src));
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char	dst[15];
	const char	src[] = "claro rey";
	char	dstaux[15];

	printf ("%lu\n", ft_strlcpy(dst, src, 12));
	printf ("%lu\n", strlcpy(dstaux, src, 12));
	printf ("%s\n", dst);
	printf ("%s\n", dstaux);
	return (0);
}*/
