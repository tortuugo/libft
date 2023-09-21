/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:13:51 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 20:49:57 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*c_s;
	char		a;

	i = 0;
	a = (char) c;
	c_s = s;
	while (i < n)
	{
		if (*(c_s + i) == a)
			return ((void *)(s + i));
		i++;
	}
	return ((void *)0);
}
/*int main(void)
{ 
	char	s[] = "abc";
   	printf ("%s", ft_memchr(s, 'd' + 213 3)); printf ("%s", memchr(s, 'd', 3));
   	return (0);
}*/
