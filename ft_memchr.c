/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 06:19:06 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 10:06:21 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*sp;

	sp = (char*)s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
