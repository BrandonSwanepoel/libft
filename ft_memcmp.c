/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 08:44:47 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 08:00:10 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((char*)s1 || ((char*)s2))) && i < n)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	return (0);
}
