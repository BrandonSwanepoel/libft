/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:12:36 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 07:23:43 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s)
	{
		str = (char*)malloc(sizeof(char) * len + 1);
		if (str == NULL)
			return (0);
		while (i < len)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
