/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:58 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 14:14:16 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		sol;
	char	a;
	char	*c_s;

	i = 0;
	sol = -1;
	a = (char) c;
	c_s = (char *) s;
	while (*(c_s + i))
	{
		if (*(c_s + i) == a)
			sol = i;
		i++;
	}
	if (a == 0)
		return (c_s + i);
	else if (sol == -1)
		return (0);
	return (c_s + sol);
}
/*int main(void)
{
	const char s[] = "hala";
	printf ("%s", ft_strrchr(s, 'b'));
	printf ("%s", strrchr(s, 'b'));
	return (0);
}*/
