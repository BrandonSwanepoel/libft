/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 06:47:12 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 09:10:57 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *hay, const char *n, size_t len)
{
	size_t	i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	if (*n == '\0')
		return ((char*)(hay));
	while (n[size])
		size++;
	while ((hay[i]) && (i < len))
	{
		j = 0;
		while (hay[i + j] == n[j] && i + j < len && j < size)
		{
			j++;
		}
		if (j == size)
			return ((char*)(hay + i));
		i++;
	}
	return (0);
}
