/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 07:30:31 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/11 07:44:02 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*str;

	size = 0;
	if (s1 && s2 != NULL)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		str = (char*)malloc(sizeof(*str) * (size + 1));
		if (str == NULL)
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (0);
}
