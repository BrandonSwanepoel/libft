/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 06:22:25 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 08:06:10 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i + s] = src[s];
		if (src[s] == '\0')
			return (dest);
		s++;
	}
	return (dest);
}
