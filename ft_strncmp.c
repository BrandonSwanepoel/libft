/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:07:01 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/12 08:12:29 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (i < n)
	{
		if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
			return (1);
		if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
			return (-1);
	}
	return (0);
}
