/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:19:16 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 08:02:07 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[len])
		len += 1;
	s = (char*)malloc(sizeof(*s) * (len + 1));
	if (s == NULL)
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
