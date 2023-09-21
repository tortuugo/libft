/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:42:10 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/20 20:04:10 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	if (!haystack)
	{
		i = haystack[-1];
		return (0);
	}
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	i = 0;
	len_needle = ft_strlen(needle);
	while (i < len && len - i >= len_needle && *(haystack + i))
	{
		if (ft_strncmp(haystack + i, needle, len_needle) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
/*#include <string.h>
int main(void)
{
	const char	haystack[] = "lorem ipsum dolor sit amet";
	const char	needle[] = "a";
	//printf ("%s\n", ft_strnstr(haystack, needle, 6));
	printf ("%s", strnstr(haystack, needle, 1));
	return (0);
}*/
