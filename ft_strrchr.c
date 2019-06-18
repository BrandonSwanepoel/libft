/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:38:10 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 08:10:55 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char*)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (0);
}
