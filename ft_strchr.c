/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:24:46 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 14:12:51 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*sol;

	i = 0;
	sol = (char *)s;
	a = (char) c;
	while (*(s + i))
	{
		if (*(sol + i) == a)
			return (sol + i);
		i++;
	}
	if (a == sol[i])
		return (sol + i);
	return (0);
}

/*int main (void)
{
	char	s[] = "hala";
	printf ("%s", ft_strchr(s, 97));
	printf ("%s", strchr(s, 97));
	return (0);
}*/
