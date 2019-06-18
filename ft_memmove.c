/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 05:19:17 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 10:06:56 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p;
	char	*p2;

	p = (char*)dst;
	p2 = (char*)src;
	if (p == NULL && p2 == NULL && !(len <= 0))
		return (p);
	i = 0;
	if (p > p2)
	{
		while ((int)(--len) >= 0)
			p[len] = p2[len];
	}
	else
	{
		while (i < len)
		{
			p[i] = p2[i];
			i++;
		}
	}
	dst = p;
	return (dst);
}
