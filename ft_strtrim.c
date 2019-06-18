/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:08:15 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/12 08:20:16 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	a;
	char	*p;

	i = 0;
	a = 0;
	if (s == '\0')
		return (0);
	a = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		if (s[i] == '\0')
			return (ft_strnew(1));
	}
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a--;
	p = ft_strsub(s, i, (a - i) + 1);
	return (p);
}
