/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:21:43 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 07:52:09 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	p = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	while (i < n)
	{
		p[i] = p2[i];
		i++;
	}
	return (p);
}
