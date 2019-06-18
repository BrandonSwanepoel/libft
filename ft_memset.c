/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 06:07:42 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 07:45:33 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)str)[i] = (unsigned char)(ch);
		i++;
	}
	return (str);
}
