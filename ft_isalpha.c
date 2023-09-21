/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:28:23 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/11 16:28:03 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("%d", ft_isalpha(40));
    printf("%d", isalpha(40));
    return(0);
}*/
