/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:12:43 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 17:14:33 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*c_s1;
	unsigned const char	*c_s2;

	i = 0;
	c_s1 = s1;
	c_s2 = s2;
	while (i < n)
	{
		if (*(c_s1 + i) != *(c_s2 + i))
			return (*(c_s1 + i) - *(c_s2 + i));
		i++;
	}
	return (0);
}
/*int main(void)
{
	const char	s1[] = "hola";
	const char	s2[] = "hola";
	printf ("%d\n", ft_memcmp(s1, s2, 4));
	printf ("%d\n", memcmp(s1, s2, 4));
	return (0);
}*/
