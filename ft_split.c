/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:18:13 by egomez-g          #+#    #+#             */
/*   Updated: 2023/09/19 19:26:32 by egomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contspli(char const *s, char c)
{
	char	ult;
	int		i;
	int		cont;

	ult = c;
	i = 0;
	cont = 0;
	while (*(s + i))
	{
		if (ult == c && s[i] != c)
		{
			cont++;
		}
		ult = s[i];
		i++;
	}
	return (cont);
}

static int	len_sub(char const *s, char c, int len)
{
	int	sol;

	sol = 0;
	while (*(s + len))
	{
		if (*(s + len) == c)
			return (sol);
		len++;
		sol++;
	}
	return (sol);
}

static int	filler(const char *s, char *sol, int pos, int sublen)
{
	int	j;

	j = 0;
	while (j < sublen)
	{
		sol[j] = s[pos];
		j++;
		pos++;
	}
	sol[j] = '\0';
	return (j);
}

static char	**liberamos(char **sol, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(sol[i]);
		i++;
	}
	free(sol);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**sol;
	int		i;
	int		j;
	int		sublen;

	sol = (char **) malloc(sizeof(*sol) * (contspli(s, c) + 1));
	if (!sol)
		return (0);
	i = 0;
	j = 0;
	while (*(s + i))
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		sublen = len_sub(s, c, i);
		sol[j] = (char *) malloc(sizeof(char) * (sublen + 1));
		if (!sol[j])
			return (liberamos(sol, j));
		i += filler (s, sol[j], i, sublen);
		j++;
	}
	sol[j] = NULL;
	return (sol);
}
/*int main(void)
{
	char	**mondongo;
	char	s[] = "hola que tal";

	mondongo = ft_split(s, ' ');
	printf ("%s", mondongo[0]);
	printf ("%s", mondongo[3]);
	free (mondongo);
	return (0);
}*/
