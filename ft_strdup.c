/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:53:50 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 17:50:47 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sol;
	size_t	i;

	sol = malloc((ft_strlen(s1) + 1) * sizeof(const char));
	if (sol == NULL)
		return (sol);
	i = 0;
	while (i < ft_strlen(s1))
	{
		sol[i] = s1[i];
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
/*int main(void)
{
	const char	s1[] = "hola";
	printf("%s", ft_strdup(s1));
	return (0);
}*/
