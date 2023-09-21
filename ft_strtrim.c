/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:18:30 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 19:32:17 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_car(char c_s1, char const *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (set[i] == c_s1)
			return (42);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	fin;
	size_t	i;
	char	*sol;

	ini = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(s1));
	fin = ft_strlen(s1) - 1;
	while (check_car(s1[ini], set) == 42)
		ini++;
	while (check_car(s1[fin], set) == 42 && fin > ini)
		fin--;
	if (ini > fin)
		return (ft_strdup(""));
	sol = malloc (sizeof(char) * (fin - ini + 2));
	if (sol == NULL)
		return (sol);
	i = 0;
	while (ini <= fin)
		sol[i++] = s1[ini++];
	sol[i] = '\0';
	return (sol);
}
/*int main(void)
{
	char const	s1[] = "   1 as1 1 1 1 1 1 1 1 1adasdf 1123 d 1  ";
	char const	s2[] = " 1";
	printf ("%s", ft_strtrim(s1, s2));
	return (0);
}*/
