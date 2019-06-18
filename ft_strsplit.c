/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:33 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 10:13:42 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int		ft_word_count(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static int		ft_letter_count(char const *str, char c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		b;
	int		k;
	char	**pp;

	i = -1;
	b = 0;
	if (!s || !(pp = (char**)malloc(sizeof(*pp) * ft_word_count(s, c) + 1)))
		return (0);
	while (++i < ft_word_count(s, c))
	{
		k = 0;
		if (!(pp[i] = ft_strnew(ft_letter_count(&s[b], c) + 1)))
			pp[i] = NULL;
		while (s[b] == c)
			b++;
		while (s[b] != c && s[b])
			pp[i][k++] = s[b++];
		pp[i][k] = '\0';
	}
	pp[i] = 0;
	return (pp);
	free(pp);
}
