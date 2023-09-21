/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:16:36 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/18 17:28:59 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	sol;
	int			neg;

	sol = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9' && *str)
	{
		sol += *str - '0';
		sol *= 10;
		str++;
	}
	sol /= 10;
	sol *= neg;
	return (sol);
}
/*#include <stdlib.h>
int main(void)
{
	const char	str[] = "--123a";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}*/
