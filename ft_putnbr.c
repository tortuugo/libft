/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:50:40 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 19:30:20 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursion(long int n, int fd)
{
	char	aux;

	if (n > 0)
	{
		recursion(n / 10, fd);
		aux = (n % 10) + '0';
		write (fd, &aux, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num *= -1;
	}
	if (num == 0)
		write (fd, "0", 1);
	else
		recursion(num, fd);
}
/*int main(void)
{
	ft_putnbr_fd(-874223, 1);
	return (0);
}*/
