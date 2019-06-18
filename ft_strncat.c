/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 06:44:25 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 08:07:00 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (dest[i])
		i++;
	while (src[s] && s < n)
	{
		dest[i++] = src[s];
		if ((s + 1) == n)
		{
			dest[i] = '\0';
			return (dest);
		}
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
