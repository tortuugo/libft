/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:51:08 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 19:32:36 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sol;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	sol = malloc (sizeof(char) * (len + 1));
	if (sol == NULL)
		return (sol);
	while (i < len)
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
