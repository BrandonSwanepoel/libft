/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:46:08 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/10 10:06:09 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	if (dst == NULL && src == NULL)
		return (dst);
	p = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if (p2[i] != (unsigned char)c)
			p[i] = p2[i];
		else
		{
			p[i] = p2[i];
			return (p + (i + 1));
		}
		i++;
	}
	return (0);
}
