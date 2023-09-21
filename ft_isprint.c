/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:52:50 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 16:13:23 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
	printf("%d", ft_isprint('a'));
	printf("%d", isprint('a'));
	return (0);
}*/
