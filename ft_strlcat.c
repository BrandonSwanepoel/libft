/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:00:03 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 10:09:54 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	d;

	i = 0;
	x = 0;
	d = 0;
	while (dst[i])
		i++;
	while (src[x])
		x++;
	while (src[d] && i + d + 1 < dstsize)
	{
		dst[i + d] = src[d];
		d++;
	}
	dst[i + d] = '\0';
	if (dstsize <= i)
		return (dstsize + x);
	else
		return (i + x);
}
