/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:36:46 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 18:54:46 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sol;
	size_t	tam;

	if (!s)
		return (0);
	tam = ft_strlen(s);
	if (start >= tam)
		return (ft_strdup(""));
	if (len > tam - start)
		len = tam - start;
	sol = malloc ((len + 1) * sizeof(char));
	if (sol == NULL)
		return (sol);
	i = 0;
	while (i < len && s[start + i])
	{
		sol[i] = s[start + i];
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
/*int main(void)
{
	printf("%s\n", ft_substr("", 1, 1));
	return (0);
}*/
