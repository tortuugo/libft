/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:04:47 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/21 18:21:25 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dest;
	const char	*c_src;
	int			i;

	c_dest = dst;
	c_src = src;
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(c_dest + i) = *(c_src + i);
			i--;
		}
		return (dst);
	}
	return (dst);
}
/*#include <unistd.h>
int main(void)
{
	char	xd[] = "mondongo";
	char	xd1[] = "kappa";
	void	*dst = xd;
	const void	*src = xd1;

	ft_memmove(dst, src, 6);
	write(1, dst, 8);
//	printf("%s",memmove(dst, src, 6));
	return (0);
}*/
