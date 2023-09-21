/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:31:57 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 19:28:04 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len ++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*sol;
	long int	num;

	num = n;
	len = len_int(num);
	sol = malloc (sizeof(char) * (len + 1));
	if (sol == NULL)
		return (sol);
	if (num == 0)
		sol[0] = '0';
	if (num < 0)
	{
		num *= -1;
		sol[0] = '-';
	}
	sol[len--] = '\0';
	while (num > 0)
	{
		sol[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (sol);
}
/*int main(void)
{
	printf("%s", ft_itoa(-120));
	return (0);
}*/
