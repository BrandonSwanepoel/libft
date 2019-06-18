/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 06:57:43 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 10:21:46 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	if (*needle == '\0')
		return ((char*)(haystack));
	while (needle[size])
		size++;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < size)
		{
			j++;
		}
		if (j == size)
			return ((char*)(haystack + i));
		i++;
	}
	return (0);
}
