/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:04:36 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/13 13:06:18 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	sol;

	sol = 0;
	while (*(s + sol) != '\0')
		sol++;
	return (sol);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *xd = "hola";
	printf("%lu", ft_strlen(xd));
	printf("%lu", strlen(xd));
	return (0);
}*/
